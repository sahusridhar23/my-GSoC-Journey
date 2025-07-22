/*Given an array consisting only of 0s, 1s, and 2s, sort the array in-place without using any sorting algorithm.
The result should have all 0s first, followed by all 1s, and then all 2s.
 
Constraints:
You must solve this in one pass (i.e., linear time) and constant space (i.e., without using extra arrays)*/

#include <stdio.h>

void swap(int arr[],int pos1,int pos2);

int main(){
	int i,arr[] = {2, 0, 2, 1, 1, 0};
	
	for (i=0;i<6;i++){
		printf("%d \t",arr[i]);
	}
	
	int start = 0,mid = 0,end=6-1;
	
	while(mid <= end){
		switch(arr[mid]){
			case 0 :
				swap(arr,mid,start);
				start++;
				mid++;
				break;
			case 1:
				mid ++;
				break;
			case 2:
				swap(arr,mid,end);
				end--;
				break;
		}
	}
	
	printf("\n");
	
	for (i=0;i<6;i++){
		printf("%d \t",arr[i]);
	}
	
	return 0;
}
		

void swap(int arr[],int pos1,int pos2){
	int temp = arr[pos1];
	arr[pos1] = arr[pos2];
	arr[pos2] = temp;
	
}
