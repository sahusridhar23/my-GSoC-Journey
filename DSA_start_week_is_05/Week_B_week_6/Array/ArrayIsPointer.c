//Array is a pointer

#include<stdio.h>

int main(){
	int aadhar[5],i;
	
	//input
//	int *ptr = &aadhar[0];
	
	int *ptr = aadhar;//aadhra == &aadhar[0]
	
	for (i=0;i<5;i++){
		printf("%d index : ",i);
		scanf("%d",(ptr+i));
	}
	
	//display
	for (i=0;i<5;i++){
		printf("\nvalue at %d index : %d",i,*(ptr+i));
	}
}
