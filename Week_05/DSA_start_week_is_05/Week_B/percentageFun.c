// WAF to calc the % of a student from marks in maths , science and sanskrit

#include <stdio.h>
#include <math.h>

float percentage(float,float,float);

int main(){
	float res ,maths ,science,sanskrit;
	
	printf("Enter marks of maths ,science and sanskrit :");
	scanf("%f%f%f",&maths,&science,&sanskrit);
	
	res = percentage(maths , science, sanskrit);
	printf("total percentage = %f", res );
	return 0;
}

float percentage(float maths,float science,float sanskrit){
	float percent = (maths + science +sanskrit)/300.0 * 100.0;
	return percent;
}
