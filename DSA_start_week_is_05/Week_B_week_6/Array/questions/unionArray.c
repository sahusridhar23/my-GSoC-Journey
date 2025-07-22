/*union of 2 arrays
The union of two arrays is a list of all distinct elements present in either of the two arrays.*/

#include <stdio.h>

void bsort(int arr[], int n);
void display(int arr[],int n);
void unite(int arr1[],int arr2[],int Union[],int m,int n);

int main(){
	int arr1[] = {7, 1, 5, 2, 3, 6};
	int arr2[] = {3, 8, 6, 20, 7};
	int Union[30];
	
	
	bsort(arr1,6);
	bsort(arr2,5);
	
	unite(arr1,arr2,Union,6,5);
	return 0;	
}

void bsort(int arr[], int n){
	int t,i,j;
	for(i=0;i<n-1;i++){
		for(j=0;j<n-i-1;j++){
			if(arr[j]>arr[j+1]){
				t= arr[j];
				arr[j] = arr[j+1];
				arr[j+1]= t;
			}
		}
	}
	display(arr,n);
}


void display(int arr[],int n){
	int i;
	printf("\n");
	for (i=0;i<n;i++){
		printf("%d \t",arr[i]);
	}
}

void unite(int arr1[],int arr2[],int Union[] ,int m,int n){
	int i,k=0;
	
	while(k<(m+n)){
		for(i=0;i<m;i++){
			Union[k] = arr1[i];
			k++;
		}
		
		for(i=0;i<n;i++){
			Union[k] = arr2[i];
			k++;
		}
		k--;
	}
	
	int length = sizeof(Union)/sizeof(Union[0]);
	
	display(Union,m+n);
	
}


