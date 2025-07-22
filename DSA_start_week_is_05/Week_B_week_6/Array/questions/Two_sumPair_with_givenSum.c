/*"Given an array of integers and a target sum, find if there exists a pair of elements whose sum 
is equal to the target. If such a pair exists, return the indices (or values) of the two elements.*/

#include <stdio.h>

void checkSum(int arr[], int n, int target);

int main(){
	int target,arr[] = {1,2,3,4,5,6,7,8,9,0};
	
	printf("Enter the target sum =");
	scanf("%d",&target);
	
	checkSum(arr,10,target);
	
	return 0;
}

void checkSum(int arr[], int n, int target){
	int i,j,sum;
	for(i=0;i<n;i++){
		for(j=i+1;j<n;j++){
			sum = arr[i] + arr[j];
			if(sum == target){
				printf("\nsum of %d(index =%d) and %d(index =%d) is %d",arr[i],i,arr[j],j,target);	
			}
		}
	}
}
