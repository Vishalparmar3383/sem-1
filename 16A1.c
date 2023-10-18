#include<stdio.h>
void main()
{
	int col,row,i,j;
	
	printf("enter the number of row:");
	scanf("%d",&row);
	
	printf("enter the number of col:");
	scanf("%d",&col);
	
	int arr[row][col];
	for(i=0;i<row;i++){
		for(j=0;j<col;j++){
			printf("enter the elements %d%d of metrix=",i,j);
			scanf("%d",&arr[i][j]);
		}
	}
	
	printf("metrix is = \n");
	for(i=0;i<row;i++){
		for(j=0;j<col;j++){
			printf("   %d   ",arr[i][j]);
		}
		printf("\n");
	}
	
}
