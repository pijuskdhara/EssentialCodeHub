//Add two matrix
#include<stdio.h>
main(){
	int arr1[2][3] = { // matrix 1
		{
			1,2,3
		},
		{
			4,5,6
		}
	};
	
	int arr2[2][3] = { // matrix 2
		{
			11,56,78
		},
		{
			56,78,12
		}
	};
	
	int res[2][3]; // result of addition
	
	int i,j;
	for(i=0;i<2;i++){//go row wise
		for(j=0;j<3;j++){//for columns
			res[i][j] = arr1[i][j] + arr2[i][j];
		}
	}
	
	//display result matrix or array
	printf("This is array 1 : \n");
	printMatrix(arr1);
	printf("\n This is array 1 : \n");
	printMatrix(arr2);
	printf("\n This is result array : \n");
	printMatrix(res);
	
}
void printMatrix(int res[2][3]){
	int i,j;
	int row = 2,col = 3;
	for(i=0;i<row;i++){//go row wise
		for(j=0;j<col;j++){//for columns
			printf(" %d ",res[i][j]);
		}
		printf(" \n ");
	}
}



