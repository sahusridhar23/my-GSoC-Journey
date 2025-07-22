// pointers in function call

#include <stdio.h>

void square(int );
void _square(int* );

int main(){
	int number = 4;
	square(number);
	printf("number is %d\n",number);
	
	_square(&number);
	printf("number is %d\n",number);
	return 0;
	
}

//call by value
void square(int n){
	n = n*n;
	printf("square = %d\n",n);
}

//call by refernce(Address)
void _square(int* n){
	*n = (*n)*(*n);
	printf("square = %d\n",*n);
}
