// print the value of i from pointer to pointer 

# include <stdio.h>

int main(){
	int i;
	int *ptr;
	int **pptr;
	
	ptr = &i;
	pptr= &ptr;
	
	printf("Enter a value :");
	scanf("%d",&i);
	
	printf("Value is %d\n",**pptr); //i
	
	return 0;
}
