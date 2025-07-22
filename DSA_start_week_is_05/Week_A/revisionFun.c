//write a function that prints "NAMASTE" if user is indian else print "bronjour" if the user is french 
#include <stdio.h>

void namaste();
void bonjour();
void hello();

int main(){
	int ch;
	printf("1.Indian\n2.French\n");
	printf("Enter nationality \n");
	scanf("%d",&ch);
	
	switch(ch){
		case 1 : namaste();
		break;
		case 2 : bonjour();
		break;
		default : printf("Invalid Choice");
}
}

void namaste(){
	printf("NAMASTE\n");
	hello();
}

void bonjour(){
	printf("BONJOUR");
}

void hello(){
	printf("hello this is dev c++");
}

	
	

