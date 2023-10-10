#include<stdio.h>
void main()
{
	int n,i,poscount=0,negcount=0;
	printf("please enter the number for array:");
	scanf("%d",&n);
	
	int arr[n];
	for(i=0;i<n;i++){
		printf("enter the elements of array[%d]=",i);
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++){
		if(arr[i]>=0){
			poscount++;
		}
		else{
			negcount++;
		}
	}
	printf("positive number=%d \n negative number=%d ",poscount,negcount);
}
	
