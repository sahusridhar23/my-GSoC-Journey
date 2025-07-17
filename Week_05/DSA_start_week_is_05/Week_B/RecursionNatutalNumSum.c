// using recursion print sum of first  n natural number 

#include <stdio.h>
#include <math.h>

int sum ();

int main (){
	int n,res;
	printf("To print sum of first  n natural number : \n Enter the value of n:");
	scanf("%d",&n);
	res = sum(n);
	
	printf ("sum of 1st n natural number %d",res);
	
	return 0;
}

int sum(int n){
	if (n==0){
		return 0 ;
	}
	int sumN = sum(n-1) + n;
	return sumN;
}
