#include<stdio.h>

float max(float a,float b,float c){
	if(a>=b && a>=c){
	return a;
	}
	else if(b>=a && b>=c){
		return b;
	}
	else{
		return c;
	}
}

void main(){
	float a,b,c,maximum;
	
	printf("enter three floating point numbers :");
	scanf("%f %f %f",&a,&b,&c);
	
	maximum=max(a,b,c);
	
	printf("max number is = %f",maximum);
}
