// arrays as function argument

#include <stdio.h>

void printNum(int arr[],int n);

int main(){
	int arr[20],n,i;
	printf("\nEnter array size :");
	scanf("%d",&n);
	
	for ( i=0;i<n;i++){
		printf("Enter Value :");
		scanf("%d",&arr[i]);
	}
	printNum(arr,n);
	
		
}

void printNum(int arr[],int n){
	int i;
	for (i=0;i<n;i++){
		printf("%d \t",arr[i]);
	}
}

