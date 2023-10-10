#include <stdio.h>
void main()
{
	int i,j,n=5;
	
	for(i=5;i>=1;i--){
		for(j=5;j>=i;j--){
		printf("%d",j);
		}
		printf("\n");
	}
	
}
