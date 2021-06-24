// simple switch case statement example
#include<stdio.h>
void main(){
	int option = 3;
	printf("Enter value: ");
	scanf("%d",&option);
	
	switch(option){
		case 1:
			printf(" One ");
			break;
		case 2:
			printf(" Two ");
			break;
		case 3:
			printf(" This is Three ");
			break;
		case 4:
			printf(" Four ");
			break;
		case 5:
			printf(" Five ");
			break;
		case 6:
			printf(" Six ");
			break;
		default:
			printf("Invalid number");
	}
}
