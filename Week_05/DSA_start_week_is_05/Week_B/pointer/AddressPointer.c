// printing memory address of a pointer 

// %p - hexadecimal 

// %u - unsigned int



#include <stdio.h>

int main(){
	int age = 22;
	int *ptr = &age;
	
	//address 
	printf("%p\n",&age);
	printf("%u\n",&age);
	
	
	printf("%p\n",ptr);
	printf("%u\n",ptr);
	
	
	printf("%p\n",&ptr);
	printf("%u\n",&ptr);
	return 0; 
	
}
