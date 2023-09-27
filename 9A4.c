#include<stdio.h>
void main()
{
	int n,i=1,r=1;
	printf("enter the number =");
	scanf("%d",&n);
	
	while(i<=n){
		r=r*i;
		i++;
	}
	printf("%d",r);
	
}
