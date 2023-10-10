#include <stdio.h>
void main()
{
	int i,n,r=1;
	printf("enter the number for multipication table:");
	scanf("%d",&n);
	
	for(i=1;i<=10;i++){
		r=n*i;
		printf(" %d * %d = %d\n", i, n, r);
	}
}
