#include<stdio.h>
void main()
{
	int a,b,sum=0;
	
	printf("enter value of a & b :");
	scanf("%d %d",&a,&b);
	
	int *ptr1=&a;
	int *ptr2=&b;
	
	sum =*ptr1 + *ptr2;
	printf("the sum is = %d",sum);
}
