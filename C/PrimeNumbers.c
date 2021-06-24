//check prime number
#include<stdio.h>

main(){
	int n = 23;
	
	int isPrime = checkPrime();
	
	if(isPrime == 1){
		printf("%d is prime",n);
	}else{
		printf("%d is not prime",n);
	}
}
int checkPrime(int n){//with argument and return value
	
	int prime = 0;
	int i=0;
	for(i=2;i<=n/2;i++){
		if(i%2==0){
			prime = 1;
			break;
		}
	}
	
	return prime;
}
