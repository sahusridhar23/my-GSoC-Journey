// swap 2 numbers 

#include <stdio.h>

void swap(int,int);
void _swap(int*,int*);

int main(){
	int a=3;
	int b=4;
	
	swap(a,b);
	printf("\noriginal values are");
	printf("\na= %d",a);
	printf("\nb= %d",b);
	
		
	_swap(&a,&b);
	printf("\noriginal values are");
	printf("\na= %d",a);
	printf("\nb= %d",b);

	return 0;
}

void swap(int a, int b){
	int c;
	c=b;
	b=a;
	a=c;
	printf("\nafter swapping");
	printf("\na=%d",a);
	printf("\nb=%d",b);
	
}

void _swap(int* a, int* b){
	int c;
	c=*b;
	*b=*a;
	*a=c;
	printf("\nafter swapping");
	printf("\na=%d",*a);
	printf("\nb=%d",*b);
	
}
