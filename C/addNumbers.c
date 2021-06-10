// add numbers untill user enters 0

#include<stdio.h>
void main(){
	int num = 0;
	int sum = 0;
	
	sum = addNumber(num);
	
	printf("Total sum : %d",sum);
}
//return data_type function_name (arguments...) 
int addNumber(int num){
	//function body
	int sum = 0;
	do{
		printf("Enter number : ");
		scanf("%d",&num);
		sum = sum + num;
	}while(num!=0);
	
	return sum; // return value
}
