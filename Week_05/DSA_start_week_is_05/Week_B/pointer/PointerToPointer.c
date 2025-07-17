// pointer to pointer : varible that stores the memory address of another pointer

# include <stdio.h>

int main(){
	float price = 100.0	;
	float *ptr = &price;
	float **pptr = &ptr;
	
	// address
	printf("%u\n",&price);
	printf("%u\n",&ptr);
	printf("%u\n",&pptr);

	// values
	printf("%f\n",price);
	printf("%f\n",*ptr);
	printf("%f\n",**pptr));

	return 0;
}

