//pointers in C
#include<stdio.h>
void main(){
	//declaration of pointers
	int *p;
	
	int arr[] = { 5, 9, 11 , 14};
	
	//print array by address
	p = &arr; //  auto assigning 1st element address
	printArray(p); // calling by reference
	
}
void printArray(int *p){
	int i;
	printf("\nPrinting array by pointer -- ");
	for(i=0;i<4;i++){
		printf("\n %d",*(p+i));
	}
}
