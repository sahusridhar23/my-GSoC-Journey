// Array length calculation

#include <stdio.h>

int main(){
	int arr[] = {1,2,3,4,5,6,0};//7
	
	printf("\nsize of array = %d",sizeof(arr));//7*4
	printf("\nsize of one element = %d",sizeof(arr[0]));//4
	
	int length = sizeof(arr)/sizeof(arr[0]);// 28/4 =7
	
	printf("\nlength of array = %d",length);
	
	return 0;
}
