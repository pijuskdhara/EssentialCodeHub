package com.in28minutes.microservices.limitservice;

import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.web.bind.annotation.GetMapping;
import org.springframework.web.bind.annotation.RestController;

@RestController
public class LimitConfigController {
	
	@Autowired
	private Configuration configuration;
	
	@GetMapping("/limits")
	public LimitConfig retrievLimitConfig() {
		return new LimitConfig(configuration.getMaximum(),configuration.getMinimum());
	}
}
