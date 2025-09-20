// move zeroes to end 

#include <stdio.h>

void sort(int arr[], int n, int swap);

int main(){
	int arr[] = {0,1,5,0,12,0,9};//7
	int insertpos = 0,i;
	
	for (i=0;i<7;i++){
		printf("%d \t",arr[i]);
	}
	
	for(i=0;i<7;i++){
		if(arr[i]!=0){
			arr[insertpos] = arr[i];
			insertpos++;
		}
	}
	
	while(insertpos < 7){
		arr[insertpos] = 0;
		insertpos++;		
	}
	
	printf("\n");
	for (i=0;i<7;i++){
		printf("%d \t",arr[i]);
	}
}
		

	
	
	



