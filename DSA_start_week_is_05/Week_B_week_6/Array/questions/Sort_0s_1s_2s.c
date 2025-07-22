// sort 0s ,1s,2s
#include <stdio.h>

int main(){
	int arr[]= {2, 0, 2, 1, 1, 0};//{1,0,1,0,1,0};// 6
	int insertpos = 0,i,j,temp;
	
	for (i=0;i<6;i++){
		printf("%d \t",arr[i]);
	}
	
	for (i=0;i<2;i++){
		for(j=0;j<6;j++){
			if(arr[j]==i){
				temp =arr[insertpos];
				arr[insertpos] = arr[j];
				arr[j]=temp;
				insertpos++;
			}
		}
	}
	
	printf("\n");
	
	for (i=0;i<6;i++){
		printf("%d \t",arr[i]);
	}
	
	return 0;
}
