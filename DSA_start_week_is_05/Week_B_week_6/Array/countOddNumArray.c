// WAF to count numbers of odd numbers in a array

#include <stdio.h>

void countOdd(int arr[],int n);

int main(){
	int arr[20],n,i;
	printf("\nEnter array size :");
	scanf("%d",&n);
	
	for ( i=0;i<n;i++){
		printf("Enter Value :");
		scanf("%d",&arr[i]);
	}
	
	countOdd(arr,n);
}
void countOdd(int arr[],int n){
	int count=0,i;
		
	for (i=0;i<n;i++){
		if(arr[i]%2 != 0){
			count++;
		}
	}
	
	printf("Odd number count : %d",count);
}
