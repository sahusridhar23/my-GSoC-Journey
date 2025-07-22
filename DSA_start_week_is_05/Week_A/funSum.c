// sum using function 
# include <stdio.h>

int sum(int,int);
void table(int);

int main(){
	int a , b,n, res;
	printf("Enter 2 numebrs :\n");
	scanf("%d%d",&a,&b);
	
	res = sum(a,b);
	
	printf("sum is %d\n",res);
	
	printf("Enter number to print its table :\n");
	scanf("%d",&n);
	table(n);
}

int sum(int a , int b){
	return a+b;
}

void table(int n){
	int i ;
	for(i=1;i<=10;i++){
		printf("%d\n",n*i);
	}
}
