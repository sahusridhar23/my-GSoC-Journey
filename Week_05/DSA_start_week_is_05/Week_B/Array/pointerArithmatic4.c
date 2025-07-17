// Pointer Arithmatic - we can also COMPARE 2 pointers

#include<Stdio.h>

int main(){
	int age = 19;
	int age1 = 22;
	int *ptr1 =&age;
	int *ptr2 =&age1;
	
	printf("difference = %u\n",ptr1 - ptr2);
	
}
