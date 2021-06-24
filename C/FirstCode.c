#include<stdio.h>

void main(){
	int var1 = 5;
	float var2 = 10.5;
	
	printf("Enter var1 = ");
	scanf("%d",&var1); // integer nput
	
	printf("Enter var2 = ");
	scanf("%f",&var2); //decimal value input
	
	int c = var1 - var2;
	
	printf("Value of c is =%d \n",c); // output
	printf(" %d - %f = %d",var1,var2,c);// output
}
