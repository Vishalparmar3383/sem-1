#include<stdio.h>
void main()
{
	int n,i=1,r;
	printf("enter the number for find all fectors:");
	scanf("%d",&n);
	
	while(i<=n){
		r=n%i;
		if(n%i==0){
		printf("%d\n",i);
		}
		i++;
	}
}
