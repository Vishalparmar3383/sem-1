#include<stdio.h>

void swap(int *a,int *b){
	int temp=*a;
	*a=*b;
	*b=temp;
}
void main()
{
	int a,b;
	
	printf("enter value of a & b :");
	scanf("%d %d",&a,&b);
	
	printf("before swaping : a=%d ,b=%d\n",a,b);
	
	int *ptr1=&a;
	int *ptr2=&b;
	
	swap(ptr1,ptr2);
	printf("aftre swaping : a=%d ,b=%d\n",a,b);
	
}
