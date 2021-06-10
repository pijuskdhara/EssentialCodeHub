#include<stdio.h>

int b = 0; // external = global variable
void main(){
	int a = 0; // automatic or local variable
	
}
void isPrime(){
	static int c = 0; // static variable = address same but data will change 
	//b is accessable from here
	//but a is not acceble from here
}
