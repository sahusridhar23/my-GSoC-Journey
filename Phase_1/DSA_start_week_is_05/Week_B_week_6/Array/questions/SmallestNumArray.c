// wap to print the smallest number in array 

#include <stdio.h>

void printSmallest(int arr[],int n);

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

	printSmallest(arr,n);
	
	return 0;
}

void printSmallest(int arr[],int n){
	int Smallest=arr[0],i;
	for ( i=0;i<n;i++){
		if(Smallest>arr[i]){
			Smallest = arr[i];
		}
	}

	printf("\nSmallest number in array is  = %d",Smallest);
}
