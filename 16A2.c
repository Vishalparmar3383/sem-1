#include<stdio.h>
void main(){

int arr[3][3],i,j,countpositive=0,countnegative=0,countzero=0;
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("enter the elements %d%d of metrix=",i,j);
			scanf("%d",&arr[i][j]);
		}
	}
	
	printf("metrix is = \n");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("   %d   ",arr[i][j]);
		}
		printf("\n");
	}
	
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			if(arr[i][j] < 0){
				countnegative++;
			}
			else if(arr[i][j] > 0){
				countpositive++;
			}
			else{
				countzero++;
			}
		}
	}
	printf("negative numbers = %d \npositive numbers = %d \ntotal zero = %d",countnegative,countpositive,countzero);
}
