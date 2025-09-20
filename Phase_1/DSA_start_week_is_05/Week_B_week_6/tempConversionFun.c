// using function convert celcius to farhenit

#include <stdio.h>
#include <math.h>

float convert_C();
float convert_F();

int main(){
	float  res ; 
	char ch;
	
	printf("Enter F or C to enter temprature in farheinit or celcius respectively: ");
	scanf(" %c", &ch);
	
	if(ch=='f' || ch=='F'){
		res = convert_C();
		printf("Temperature in Celcius: %f\n", res);
	}
	else if(ch=='c' || ch=='C'){
		res = convert_F();
		printf("Temperature in Fahrenheit: %f\n", res);
	}
	else{
		printf("INVALID INPUT");
	}
	
	return 0;
}

float convert_F(){
	float c ;
	
	printf("Enter temprature (in celcius) :");
	scanf("%f",&c);
	float res = ((c*(9.0/5.0))+32.0);
	return res;
}


float convert_C(){
	float  f;
	
	printf("Enter temprature (in farhenit) :");
	scanf("%f",&f);
	float res = ((f-32.0)*5.0/9.0);
	return res;
}
