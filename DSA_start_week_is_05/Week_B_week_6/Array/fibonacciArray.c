//WAP to store 1st n terms of fibonacci numbers

#include <Stdio.h>

int main(){
	int n,i;
	
	printf("Enter n(n>2) :");
	scanf("%d",&n);
	
	int fib[n];
	fib[0]=0;
	fib[1]=1;
	
	for(i=2;i<n;i++){
		fib[i] = fib[i-1] + fib[i-2];
	}
	for(i=0;i<n;i++){
		printf("%d\t",fib[i]);
	}
	
	return 0;

	
}


