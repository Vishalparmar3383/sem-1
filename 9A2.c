#include <stdio.h>
void main()
{
	int n,i=1,a;
	printf("please enter the number for multiplication table:");
	scanf("%d",&n);
	
	while(i<=10){
		a=n*i;
		printf("%d  *%d  =%d  \n",n,i,a);
		i++;
	}
}
