#include<stdio.h>
void main()
{
	int col,row,i,j;
	
	printf("enter the number of row:");
	scanf("%d",&row);
	printf("enter the number of col:");
	scanf("%d",&col);
	
	int a[row][col],b[row][col];
	for(i=0;i<row;i++){
		for(j=0;j<col;j++){
			printf("enter the elements %d%d of metrix A=",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	printf("metrix A = \n");
	for(i=0;i<row;i++){
		for(j=0;j<col;j++){
			printf("   %d   ",a[i][j]);
		}
		printf("\n");
	}
	for(i=0;i<row;i++){
		for(j=0;j<col;j++){
			printf("enter the elements %d%d of metrix B=",i,j);
			scanf("%d",&b[i][j]);
		}
	}
	printf("metrix B = \n");
	for(i=0;i<row;i++){
		for(j=0;j<col;j++){
			printf("   %d   ",b[i][j]);
		}
		printf("\n");
	}
	printf("the sum of two metrix A+B = \n");
	for(i=0;i<row;i++){
		for(j=0;j<col;j++){
			int sum = a[i][j] + b[i][j];
			printf("  %d  ",sum);
		}
		printf("\n");
	}
}
