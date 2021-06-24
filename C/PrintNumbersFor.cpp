// print numbers by loop
#include<stdio.h>
main(){
	int n = 10;
	int i = 1; // initial value
	
	start:
	i = i+1;
	printf("\n value of i = %d",i);
	if(i==n){
		goto end;
	}else{
		goto start;
	}
	
	end:
		printf(" Execution complete");
}
