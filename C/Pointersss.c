//Pointer learning
#include<stdio.h>
void main(){
	int *p;
	int c;
	printSize();
	
}
void printSize(){
	int arr[3]={5,6,7};
	int* p1,p2;
	p1 = &arr[0];
	p2 = &arr[2];
	int* szi = p1-p2;
	printf(" >> %d",szi);
}
