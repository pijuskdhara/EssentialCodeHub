// Strings in C
#include<stdio.h>
main(){
	char str[50]="hello";//array size = 50
	char str2[50];
	printf("Write anything: ");
	gets(str2);
	
	//printCharacters(str);
	//isEqualString(str,str2);
	addTwoString(str,str2);
}
void addTwoString(char str[],char str1[]){
	printf("String 1: %s , String 2: %s\n\n",str,str1);
	
	strcat(str1,str);//str1 adds with str;
	
	printf("String 1: %s , String 2: %s\n\n",str,str1);
	
	
}

void isEqualString(char str[],char str1[]){
	printf("String 1: %s , String 2: %s\n",str,str1);
	int a = strcmp(str,str1); //compare two strings
	if(a==0){
		printf("Strings are equal");
	}else{
		printf("Strings are not equal");
	}
}

void printCharacters(char str[]){ // print individual characters in each line
	int i;
	printf("String : %s \n",str);
	int n = strlen(str); // finds length of the string or character array
	printf("Length of string: %d \n",n);
	for(i=0;i<n;i++){
		printf("%c \n",str[i]);
	}
}
