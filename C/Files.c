//files in C
#include<stdio.h>
#include<stdlib.h>

FILE *fptr;
void main(){
	
	char fileName[]="C:\\Users\\PKD\\Desktop\\test.txt";
	//writeToFile(fileName);
	readFile(fileName);
}
void readFile(char fileName[]){
	char str[50];
	fptr = fopen(fileName,"r");
	if(fptr == NULL){
		printf("error");
		exit(1);
	}
	
	fscanf(fptr,"%s",&str);
	
	printf("Text from file :");
	puts(str);
	
	fclose(fptr);
}

void writeToFile(char fileName[]){
	char str[50];
	fptr = fopen(fileName,"w");
	if(fptr == NULL){
		printf("error");
		exit(1);
	}
	
	printf("Write text here :");
	gets(str);
	fprintf(fptr,"%s",str);
	
	fclose(fptr);
}




