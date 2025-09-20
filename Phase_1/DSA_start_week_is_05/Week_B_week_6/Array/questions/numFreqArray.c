// In a array of numbers, find how many times does a number 'x' occurs.

#include<Stdio.h>

int count(int arr[], int n,int k);



int main(){
	
	int arr[] = {1,2,3,4,5,6,7,1,2,3,3,3,4,5,6,6,7},k,res;//17
	
	printf("\nEnter the numeber");
	scanf("%d",&k);
	res =count (arr,17,k);
	
	
	printf("\n%d occurs %d times",k,res);

	return 0;
}

int count(int arr[], int n,int k){
	int freq=0,i;
	for ( i=0;i<n;i++){
		if (k==arr[i]){
			freq++;
		}
	}
	return freq;
	
}
