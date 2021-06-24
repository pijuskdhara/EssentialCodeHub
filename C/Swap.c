//swap two numbers using call by refference
#include<stdio.h>
void swapNumbers(int* n1,int* n2); //function declaration
void main(){
	int n1=15,n2=46;
	printf("\n Before swap : n1 = %d , n2 = %d",n1,n2);
	swapNumbers(&n1,&n2);
	
	printf("\n After swap : n1 = %d , n2 = %d",n1,n2);
}
void swapNumbers(int* n1,int* n2){
	int temp;
	
	temp = *n1;
	*n1 = *n2;
	*n2 = temp;
	
}
