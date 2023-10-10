#include<stdio.h>

void main()
{
	float i,j,fac=1,sum=1,e,a;

	for (i=1;i<=10000;i++){fac=1;
		for(j=1;j<=i;j++){
			fac*=j;
			}
		a=1/fac;
		sum+=a;
	}
	printf("%.20f",sum);
}
