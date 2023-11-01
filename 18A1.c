#include<stdio.h>

int add(int a,int b){
	return a+b;
}

void main(){
	int a,b,sum;
	
	printf("enter value of a & b :");
	scanf("%d %d",&a,&b);
	
	sum=add(a,b);
	
	printf("the sum is = %d",sum);
}
