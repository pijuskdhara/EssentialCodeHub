//multidimensional array

#include<stdio.h>
main(){
	//array declaration
	//initialize at declaration
	int arr[3][3] = {
		{ 
			1,2,3
		},
		{
			4,8,6
		},
		{
			9,23,45
		}
	
	};
	
	
	
	//arr[1][2] = 5; //assigning value 
	//accessing array element
	printf(" %d ",arr[2][2]); //by default array initialized to zero
}
