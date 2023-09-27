#include<stdio.h>
void main()
{
	int a,i=1,count=0;
	printf("enter the number:");;
	scanf("%d",&a);
	
	while(i<=a){
		if(a%i==0){
			count++;
		}
		i++;
		
	}
	if(count==2){
		printf("number is prime");
	}
	else{
		printf("number is not prime");
	}
}
