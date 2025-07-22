// rotate array

#include <stdio.h>

void inputarr();
void display(int arr[],int n);
void rotate(int arr[],int n);

int main(){
	int arr[20],n,i;
	printf("\nEnter array size(<20) :");
	scanf("%d",&n);
	
	for ( i=0;i<n;i++){
		printf("Enter Value :");
		scanf("%d",&arr[i]);
	}
	
	display(arr,n);		
	
	rotate(arr,n);
	
	return 0;
}

void inputarr(){
	
}

void display(int arr[],int n){
	int i;
	for (i=0;i<n;i++){
		printf("%d \t",arr[i]);
	}
}

void rotate(int arr[],int n){
	while(1){
		printf("rotate array?(y/n):");
		char ch;
		int t,i;
		scanf(" %c",&ch);
		if(ch== 'y' || ch=='Y'){
			t=arr[0];
			for(i=0;i<n-1;i++){
				arr[i] = arr[i+1];
			}
			arr[n-1]=t;
			display(arr,n);
		}
		else{
			break;
		}
	}
			
}
