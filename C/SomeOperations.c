#include<stdio.h>

main(){
	int a = 0;
	int b = 0;
	
	printf("Enter value for a : ");
	scanf("%d",&a);
	
	printf("Enter value for b : ");
	scanf("%d",&b);
	
	int add = a + b; //addition
	int sub = a - b; //subtraction
	int div = a/b; // division
	int mul = a*b; // multiplication
	
	printf("%d + %d = %d \n",a,b,add);
	printf("%d - %d = %d \n",a,b,sub);
	printf("%d / %d = %d \n",a,b,div);
	printf("%d * %d = %d \n",a,b,mul);	
}
