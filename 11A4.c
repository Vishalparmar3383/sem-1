#include <stdio.h>
void main()
{
	int x,y,i,r=1;
	printf("enter the number x and its power y:");
	scanf("%d %d",&x,&y);
	
	for(i=1;i<=y;i++){
		r=r*x;
	}
	printf("\n%d",r);
}
