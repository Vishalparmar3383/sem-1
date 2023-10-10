#include <stdio.h>
void main()
{
	int n,i,r=1;
	
	printf("enter the number:");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++){
		r=r*i;
	}
	printf("%d",r);
}
