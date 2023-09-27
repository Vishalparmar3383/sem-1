#include<stdio.h>
void main()
{
	int a,b ;
	printf("Enter value for a and b: ");
	scanf("%d %d",&a,&b);
	while(a<b)
	{
		if(a%2==0)
        {
			printf("%d\n",a);
		}
		a++;
	}
}
