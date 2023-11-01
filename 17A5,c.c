#include<stdio.h>
void main()
{
	int n,i;
	
	printf("enter the number of elements : ");
	scanf("%d",&n);
	
	int a[n];
	for(i=0;i<n;i++){
		printf("enter the element %d=",i);
		scanf("%d",&a[i]);	
	}
	
	int *ptr=a;
	printf("elements in the array using pointer :\n");
	
	for(i=0;i<n;i++){
		printf("%d\n",*(ptr +i));	
	}
}
