// Pointer Arithmatic - we can also COMPARE 2 pointers

#include<Stdio.h>

int main(){
	int age = 19;
	char age1 = 'a';
	int *ptr1 =&age;
	char *ptr2 =&age1;
	
	printf("POINTER 1= %u\n",ptr1);
	printf("POINTER 2= %u\n",ptr2);
	printf("difference = %u\n",ptr1 - ptr2);
	
	
}
