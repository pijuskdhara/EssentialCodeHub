//check odd or even
#include<stdio.h>
void main(){
	int odd = checkOddEven();
	if(odd==0){
		printf("This is an even number.");
	}else{
		printf("This is an odd number");
	}
}
int checkOddEven(){ // no argument and with return value
	int odd = 0;
	int n = 5;
	
	if(n%2==0 && n!=0){
		odd = 0;
		
	}else{
		odd = 1;
		
	}
	return odd;
}
