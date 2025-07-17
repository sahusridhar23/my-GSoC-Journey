// WAP to enter price of 3 items & print their 	final cost with 18% gst 

#include <Stdio.h>

int main(){
	float item[3];
	int i;

	for (i=0;i<3;i++){
		printf("enter item%d price =",i+1);
		scanf("%f",&item[i]);
	}

	for (i=0;i<3;i++){
		item[i] += .18*item[i];
	}
	
	for (i=0;i<3;i++){
		printf("\nitem%d final price =%f",i+1,item[i]);
	}
	return 0;
}
