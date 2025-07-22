// pointer arithmatic(increment & decrement operations in pointer)- integer

#include <stdio.h>

int main(){
	float price= 100;
	float *ptr = &price;
	
	printf("\nptr = %u",ptr);
	ptr++;// incement by 1 float datatype(equivallent to 4 byte)
	printf("\nptr = %u",ptr);
	ptr--;
	printf("\nptr = %u",ptr);
	
}
