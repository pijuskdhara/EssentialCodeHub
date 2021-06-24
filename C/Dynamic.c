//dynamic memory with pointer
#include<stdio.h>
#include<stdlib.h>
void printData(int* ptr,int num);
void main(){
	int* ptr;
	int num = 5;
	
	//ptr = (int*)malloc(num*sizeof(int));
	ptr = (int*)calloc(num,sizeof(int));
	
	if(ptr==NULL){
		printf("Error allocating memory!");
		exit(0);
	}
	printf("\n Enter new size : ");
	scanf("%d",&num);
	ptr = (int*)realloc(ptr,num);
	
	int i=0;
	int x = 0;
	while(i<num){
		printf("\n Enter data : ");
		scanf("%d",&x);
		*(ptr+i)=x;
		
		i++;
	}
	
	printData(ptr,num);
	free(ptr);
	
}
void printData(int* ptr,int num){
	//print all data
	printf("\nPrinting all data");
	int i=0;
	while(i<num){
		printf("\n data : %d",*(ptr+i));
		i++;
	}
}
