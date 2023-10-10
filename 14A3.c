#include<stdio.h>
void main()
{
	int n,i,evencount=0,oddcount=0;
	printf("please enter the number for array:");
	scanf("%d",&n);
	
	int arr[n];
	for(i=0;i<n;i++){
		printf("enter the elements of array[%d]=",i);
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++){
		if(arr[i]%2==0){
			evencount++;
		}
		else{
			oddcount++;
		}
	}
	printf("even number=%d \n odd number=%d ",evencount,oddcount);
}
	
