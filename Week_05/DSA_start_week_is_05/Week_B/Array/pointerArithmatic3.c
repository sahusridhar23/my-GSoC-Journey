// Pointer Arithmatic - we can SUBTRACT one pointer form another

#include<Stdio.h>

int main(){
	int age = 19;
	int age1 = 22;
	int *ptr1 =&age;
	int *ptr2 =&age1;
	
	printf("POINTER 1= %u\n",ptr1);
	printf("POINTER 2= %u\n",ptr2);
	printf("difference = %u\n",ptr1 - ptr2);// differs by 1 int (equivallent to 4 bytes)
	
}
