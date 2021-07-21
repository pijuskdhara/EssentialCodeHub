package com.me.microservices.currencyconversionservice;

import java.math.BigDecimal;
import java.util.HashMap;
import java.util.Map;

import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.http.ResponseEntity;
import org.springframework.web.bind.annotation.GetMapping;
import org.springframework.web.bind.annotation.PathVariable;
import org.springframework.web.bind.annotation.RestController;
import org.springframework.web.client.RestTemplate;

@RestController
public class CurrencyConversionController {
	
	@Autowired
	private CurrencyExchangeServiceProxy proxy;
	
	@GetMapping("/currency-converter/from/{from}/to/{to}/qty/{qty}")
	public CurrencyConvBean convertCurrency(@PathVariable String from,@PathVariable String to,@PathVariable BigDecimal qty) {
		Map<String,String> uriVars = new HashMap<>();
		uriVars.put("from", from);
		uriVars.put("to", to);
		
		ResponseEntity<CurrencyConvBean> responseEntity =  new RestTemplate().getForEntity("http://localhost:8000/currency-exchange/from/{from}/to/{to}", CurrencyConvBean.class, uriVars);
		
		CurrencyConvBean response = responseEntity.getBody();
		
		return new CurrencyConvBean(response.getId(),from,to,response.getConversionMultiple(),qty,qty.multiply(response.getConversionMultiple()),response.getPort());
	}
	
	@GetMapping("/currency-converter-feign/from/{from}/to/{to}/qty/{qty}")
	public CurrencyConvBean convertCurrencyFeign(@PathVariable String from,@PathVariable String to,@PathVariable BigDecimal qty) {
		
		CurrencyConvBean response = proxy.retrievExchangeValue(from, to);
		
		return new CurrencyConvBean(response.getId(),from,to,response.getConversionMultiple(),qty,qty.multiply(response.getConversionMultiple()),response.getPort());
	}
}
