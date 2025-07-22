// using function find the square of a numebr 
# include <stdio.h>
# include <math.h>

int square(int);

int main(){
	int a,res ;
	printf("Enter a number\n");
	scanf("%d",&a);
	
	res = square(a);
	printf("square is %d",res);
}

int square(int n){
	return pow(n,2);
}
