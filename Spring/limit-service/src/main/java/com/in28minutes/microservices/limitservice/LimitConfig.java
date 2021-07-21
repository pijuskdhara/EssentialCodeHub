package com.in28minutes.microservices.limitservice;

/**
 * @author PIJUS
 *
 */
public class LimitConfig {
	private int maximum, minimum;
	
	public LimitConfig(int maximum, int minimum) {
		// TODO Auto-generated constructor stub
		this.maximum = maximum;
		this.minimum = minimum;
	}
	public int getMaximum() {
		return maximum;
	}
	public void setMaximum(int maximum) {
		this.maximum = maximum;
	}
	public int getMinimum() {
		return minimum;
	}
	public void setMinimum(int minimum) {
		this.minimum = minimum;
	}
	

}
