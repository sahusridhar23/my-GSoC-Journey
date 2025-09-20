// wap to print the largest number in array 

#include <stdio.h>

void printLargest(int arr[],int n);

int main(){
	int arr[20],n,i;
	
	printf("\nEnter array size(<20) :");
	scanf("%d",&n);
	
	for ( i=0;i<n;i++){
		printf("Enter Value :");
		scanf("%d",&arr[i]);
	}
	
	for (i=0;i<n;i++){
		printf("%d \t",arr[i]);
	}

	printLargest(arr,n);
	
	return 0;
}

void printLargest(int arr[],int n){
	int largest=arr[0],i;
	for ( i=0;i<n;i++){
		if(largest<arr[i]){
			largest = arr[i];
		}
	}

	printf("\nlargest number in array is  = %d",largest);
}
