#include<stdio.h>
void main()
{
	int a=5;
	char b='V';
	double c=45.0;
	float d=1.3;
	
	int *intptr;
	intptr = &a;
	char *charptr;
	charptr = &b;
	double *doubleptr;
	doubleptr = &c;
	float *floatptr;
	floatptr = &d;
	
	printf("the value of a variable is = %d\n",*intptr);
	printf("the address of a variable is = %d\n",intptr);
	
	printf("the value of b variable is = %c\n",*charptr);
	printf("the address of b variable is = %d\n",charptr);
	
	printf("the value of c variable is = %lf\n",*doubleptr);
	printf("the address of c variable is = %d\n",doubleptr);
	
	printf("the value of d variable is = %f\n",*floatptr);
	printf("the address of d variable is = %d\n",floatptr);
}

