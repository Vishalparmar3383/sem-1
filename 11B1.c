#include<stdio.h>
void main()
{
	int n,i,t3,t1=0,t2=1;
	
	printf("enter the number:");
	scanf("%d",&n);
	printf("0 1");
	for(i=0;i<n-2;i++){
		t3=t2+t1;
		t1=t2;
		t2=t3;
		printf(" %d",t3);
	}
}
