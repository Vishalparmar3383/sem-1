#include<stdio.h>
void main()
{
	int a=5;
	int *ptr=&a;
	
	printf("the value of a variable is = %d\n",*ptr);
	
	printf("the address of a variable is = %d\n",ptr);
}

