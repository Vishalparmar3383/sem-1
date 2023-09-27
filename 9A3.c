#include<stdio.h>
void main()
{
	int x,y,i=1,result=1;
	printf("enter the two number x & y=\n");
	scanf("%d %d",&x,&y);
	
	while( i<=y){
		result=result*x ;
		i++;
	}
	printf("%d",result);
}
