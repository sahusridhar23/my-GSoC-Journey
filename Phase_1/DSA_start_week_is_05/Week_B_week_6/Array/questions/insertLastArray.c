// WAP to insert an element  at the end of the array 

#include <stdio.h>

void push(int arr[],int n,int ele);

int main(){
	int arr[20],n,i,ele;
	printf("\nEnter array size(<20):");
	scanf("%d",&n);
	
	for ( i=0;i<n;i++){
		printf("Enter Value :");
		scanf("%d",&arr[i]);
	}
	
	for (i=0;i<n;i++){
		printf("%d \t",arr[i]);
	}
	
	printf("Enter the element to add:");
	scanf("%d",&ele);
	
	push(arr,n,ele);
	
	return 0;
}

void push(int arr[],int n,int ele){
	int i;
	arr[n] = ele;
	
	n++;
	
	for (i=0;i<n;i++){
		printf("%d \t",arr[i]);
	}
}
