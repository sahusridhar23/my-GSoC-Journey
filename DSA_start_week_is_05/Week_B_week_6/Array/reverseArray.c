// reverse array

#include<Stdio.h>

int main(){
	int arr[20],n,i,firstValue,secondValue,temp;
	printf("\nEnter array size :");
	scanf("%d",&n);
	
	for ( i=0;i<n;i++){
		printf("Enter Value :");
		scanf("%d",&arr[i]);
	}
	
	printf("\nOriginal Array");
	for (i=0;i<n;i++){
		printf("%d \t",arr[i]);
	}
	
	for ( i=0;i<n/2;i++){
		
		firstValue = arr[i];
		secondValue =arr[n-i-1];
		
		temp = arr[n-i-1];
		arr[n-i-1] = arr[i];
		arr[i] = temp;
		
		
	}
	
	printf("\nReversed Array");
	for (i=0;i<n;i++){
		printf("%d \t",arr[i]);
	}
}
