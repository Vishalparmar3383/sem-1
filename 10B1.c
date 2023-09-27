#include<stdio.h>
void main()
{
	int n,i=1,sum=0;
	printf("Enter a number: ");
    scanf("%d", &n);
    
    while(i<n){
    	if(n%i==0){
    	sum=sum+i;
		}
	i++;
	}
	if(sum==n){
		printf("number is perfect");
	}
	else{
		printf("number is not perfect");
	}
}
