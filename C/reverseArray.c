//reverse an array
#include<stdio.h>
void main(){
	//declaration of pointers
	int *p;
	
	int arr[] = { 5, 9, 11 , 14};
	p = &arr;
	
	printf("Actual array \n\n");
	printArray(p);
	printf("\n\nReversed array \n\n");
	reverseArray(p);
	
	//print array
	printArray(p);
}

void reverseArray(int *p){
	int i;
	for(i=0;i<2;i++){//half of length
		int temp = *(p+i);
		*p = *(p+3-i);//assign last element to first 
		*(p+3-i) = temp;
	}
}
void printArray(int *p){
	int i;
//	printf("\nPrinting array by pointer -- ");
	for(i=0;i<4;i++){
		printf("\n %d",*(p+i));
	}
}
