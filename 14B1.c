#include<stdio.h>
void main()
{
	int n,i,sum=0,count=0;
	float avg;
	printf("please enter the number for array:");
	scanf("%d",&n);
	
	int arr[n];
	for(i=0;i<n;i++){
		printf("enter the elements of array[%d]=",i);
		scanf("%d",&arr[i]);
	}
	
	for(i=0;i<n;i++){
		sum+=arr[i];
	}
	avg=sum/n;
	
	for(i=0;i<n;i++){
		if(arr[i]>avg){
			count++;
		}
	}
	printf("the numbers which is higher than the average = %d\n",count);
}
