#include<stdio.h>
void main()
{
	int n,i,j,k;
	printf("enter the size of array = ");
	scanf("%d",&n);
	
	int arr[n];
	for(i=0;i<n;i++){
		printf("enter the elements of array[%d]",i);
		scanf("%d",&arr[i]);
	}
	
	for(i=0;i<n;i++){
		for(j=i+1;j<n;j++){
			if(arr[i]==arr[j]){
				for(k=j;k<n-1;k++){
					arr[k]=arr[k+1];	
				}
				k--;
				n--;
			}
		}
	}
	for(i=0;i<n;i++){
		printf("%d\n",arr[i]);
	}
	
}
