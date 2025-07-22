// WAF to print the n terms of fibinacci sequence 

#include<stdio.h>

void fib(int);

int main(){
	int k;
	
	printf("Enter a value:");
	scanf("%d",&k);
	
	fibonacci(k);
	
	return 0;
}

void fib(int n){
	int a=0,b=1,c;
	
	printf("Fibonacci seriees:\n0\t");
	while(n!=0){
		c = a+b;
		printf("%d\t",c);
		a=b;
		b=c;
	}
}


