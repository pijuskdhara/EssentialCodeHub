//sum of natural numbers using recursion
// print 0 to n using recursion
#include<stdio.h>
void main(){
	int n = 0; // initial value
	int sum = 0; 
	
	printf("Enter maximum numbers : ");
	scanf("%d",&n);
	
	sum = getSum(n,sum); //calling recursive function
	
	printf("Sum of naturals numbers are %d",sum);
}
int getSum(int n,int sum){
	
	if(n==0){
		return sum;
	}else{
		sum = sum + n;
		return getSum(n-1,sum);
	}
	
}

