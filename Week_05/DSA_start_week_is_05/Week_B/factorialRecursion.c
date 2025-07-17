// using Recursion find factorial of n.

#include <stdio.h>
#include <math.h>

int factorial(int);

int main(){
	int n , res ;
	printf("Enter a number :");
	scanf("%d",&n);
	
	res = factorial(n);

	printf("%d factorial  = %d ",n,res);
}

int factorial(int n){
	if(n==0){
		return 1;
	}
	int fac = n * factorial(n-1);
	return fac;
}
