#include<stdio.h>
void main()
{
	int n,i,p=0;
	printf("please enter the number for array:");
	scanf("%d",&n);
	
	int arr[n];
	for(i=0;i<n;i++){
		printf("enter the elements of array[%d]=",i);
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++){
		printf("array[%d]=%d\n",i,arr[i]);
	}
	printf("\n");
	for(i=n-1;i>=0;i--){
		printf("array[%d]=%d\n",p++,arr[i]);
	}
}
