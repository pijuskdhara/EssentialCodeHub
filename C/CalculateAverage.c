//calculate average using array
#include<stdio.h>
main(){
	int arr[] = {5,9,10,11,56}; //sum = 91
	int size = 5;
	int sum=0;
	int i=0;
	
	arr[2] = 105; //assigning an array element
	
	
	for(i=0;i<size;i++){
		printf("arr[%d] = %d\n",i,arr[i]);
		sum = sum + arr[i];//i = 0,1,...,4
	}
	float avg = (float)sum/size;
	
	printf("Average = %f",avg);
	
}
