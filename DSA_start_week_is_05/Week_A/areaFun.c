// using function calc the areas of rectangle , circle, square.
#include <stdio.h>
#include <math.h>


void arSquare(float);
void arRect(float,float);
void arCircle(float);

int main(){
	float s,l,b,r;
	
	printf("Enter side length of a square : ");
	scanf("%f",&s);
	arSquare(s);	
	
	printf("Enter side length and breadth of a rectangle: ");
	scanf("%f%f",&l,&b);
	arRect(l,b);


	printf("Enter radius of a circle : ");
	scanf("%f",&r);
	arCircle(r);

}

void arSquare(float s){
	printf("area is %f\n",pow(s,2));
}

void arRect(float l,float b){
	printf("area is %f\n",l*b);
}

void arCircle(float r){
	printf("area is %f\n",(3.14 * pow(r,2)));
}



