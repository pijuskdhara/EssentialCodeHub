// print 1 to 10 natural digits. 1 2 3 ... 10
#include<stdio.h>
void main(){
	int n = 10; // number of digits to print
	int i = 1; // initial value
	
	while(i<n){//this is an infinite loop
		//execute statements
		printf("Current value of i = %d\n",i);
		i=i+1;
	}
	
	printf("\n After loop");
}
