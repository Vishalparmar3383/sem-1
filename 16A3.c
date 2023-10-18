#include<stdio.h>
void main()
{
int arr[20][2],i,j;
	for(i=0;i<20;i++){
		for(j=0;j<20;j++){
			printf("enter the rollno. of students %d%d = ",i,j);
			scanf("%d",&arr[i][j]);
		}
		
		for(j=0;j<20;j++){
			printf("enter the mark of students %d%d = ",i,j);
			scanf("%d",&arr[i][j]);
		}
	}
}
