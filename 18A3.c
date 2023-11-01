#include<stdio.h>

float simpleint(float p,float r,float t){
	return (p*r*t)/100;
}

void main()
{
	float p,r,t,interest;
	
	printf("enter principle amount :");
	scanf("%f",&p);
	printf("enter rate of interest :");
	scanf("%f",&r);
	printf("enter timr in year :");
	scanf("%f",&t);
	
	interest = simpleint(p,r,t);
	
	printf("simple interest = %.3f\n",interest);
}
