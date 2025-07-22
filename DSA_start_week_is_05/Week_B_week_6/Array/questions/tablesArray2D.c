// create a 2d array storing tables of 2 and 3 

#include<Stdio.h>

void storeTable(int arr[][10], int m, int n,int number);

int main(){
	int  tables[2][10],i,j;
	
	storeTable(tables,0,10,2); // store 2 table
	storeTable(tables,1,10,3); // store 3 table
	
	for(i=0;i<2;i++){
		for(j=0;j<10;j++){
			printf("%d\t",tables[i][j]);
		}
		printf("\n");
	}
		
}

void storeTable(int arr[][10 ], int m, int n, int number){
	int i,j;
	for(i=0;i<n;i++){
			arr[m][i] = number*(i+1);
	}	
}
