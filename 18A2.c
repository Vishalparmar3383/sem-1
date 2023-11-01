#include<stdio.h>
void max(int,int);
void main()
{
	int a,b;
	printf("enter value of a & b :");
	scanf("%d %d",&a,&b);
	max(a,b);	
}
void max(int a,int b){
	if(a>b){
		printf("a is max.\n");
		printf("b is min.\n");
	}
		else if(a<b){
		printf("b is max.\n");
		printf("a is min.\n");
	}
	else{
		printf("both are same.\n");
	}
}
