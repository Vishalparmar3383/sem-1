#include<stdio.h>
void main()
{
	int n,i,max,min,sum=0;
	float avg=0.0;
	printf("size of array:");
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++){
		printf("enter elements into array[%d]=",i);
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++){
		sum+=a[i];
	}
	avg=sum/n;
	max=a[0];
	for(i=0;i<n;i++){
		if(a[i]>max)
		{
			max=a[i];
		}
	}
	min=a[0];
	for(i=0;i<n;i++){
		if(a[i]<min)
		{
			min=a[i];
		}
	}
    printf("sum is=%d\n avg=%f\n max=%d\n min=%d\n",sum,avg,max,min);
}
