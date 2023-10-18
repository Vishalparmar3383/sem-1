#include<stdio.h>
void main()
{
	int height[5],weight[5],i,count=0;
	
	for(i=0;i<5;i++){
		printf("enter the height of height[%d]=",i);
		scanf("%d",&height[i]);
	}
	for(i=0;i<5;i++){
		printf("enter the weight of weight[%d]=",i);
		scanf("%d",&weight[i]);
	}
	for(i=0;i<5;i++){
		if(height[i]>170 && weight[i]<50){
			count++;
		}
	}
	printf("person having height greater than 170 and weight less than 50 = %d",count);
}
