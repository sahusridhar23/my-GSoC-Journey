// pointer arithmatic(increment & decrement operations in pointer)- integer

#include <stdio.h>

int main(){
	int age  = 22;
	int *ptr = & age;
	
	printf("\nptr = %u",ptr);  
	ptr++;// incement by 1 int datatype(equivallent to 4 byte)
	printf("\nptr = %u",ptr);
	ptr--;
	printf("\nptr = %u",ptr);
	
}
