package com.pijus.dev.currencyexchangeservice;

import java.math.BigDecimal;

import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.core.env.Environment;
import org.springframework.web.bind.annotation.GetMapping;
import org.springframework.web.bind.annotation.PathVariable;
import org.springframework.web.bind.annotation.RestController;

@RestController
public class CurrencyExchangeController {
	
	@Autowired
	private Environment env;
	
	@Autowired
	private ExchangeValueRepo repo;
	
	@GetMapping("/currency-exchange/from/{from}/to/{to}")
	public ExchangeValue retrievExchangeValue(@PathVariable String from,@PathVariable String to) {
		ExchangeValue e = repo.findByFromAndTo(from, to); 
		//ExchangeValue e = new ExchangeValue(1000L,from,to,BigDecimal.valueOf(65));
		//e.setPort(8000);
		e.setPort(Integer.parseInt(env.getProperty("local.server.port")));
		return e;
	}
}
