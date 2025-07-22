// pointer arithmatic(increment & decrement operations in pointer)- char

#include <stdio.h>

int main(){
	char ch = '*';
	char *ptr = &ch;
	
	printf("\nptr = %u",ptr);
	ptr++;// incement by 1 char datatype(equivallent to 1 byte)
	printf("\nptr = %u",ptr);
	ptr--;
	printf("\nptr = %u",ptr);
	
}
