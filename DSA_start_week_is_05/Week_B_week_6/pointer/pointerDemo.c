// pointer demo

# include <stdio.h>

int main(){
	int age = 22;
	int *ptr =  &age;
	int _age = *ptr;
	
	printf("%d\n",*ptr);
	printf("%d",_age);
	
	return 0;
}
