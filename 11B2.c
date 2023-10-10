#include <stdio.h>
int main()
{
	 long  i,n,c1=0,c2=0,c3=0,c4=0,c5=0,c6=0,c7=0,c8=0,c9=0,c0=0;
	
	printf("please enter the number:");
	scanf("%ld",&n);
	
	if(n<0){
		n=-n;
	}
	for(;n>0;){
		i=n%10;
		switch(i){
			
			case 0:
				c0++;
				break;
				
			case 1:
				c1++;
				break;
			
			case 2:
				c2++;
				break;
				
			case 3:
				c3++;
				break;
				
			case 4:
				c4++;
				break;
				
			case 5:
				c5++;
				break;
				
			case 6:
				c6++;
				break;
				
			case 7:
				c7++;
				break;
				
			case 8:
				c8++;
				break;
				
			case 9:
				c9++;
				break;				
		}
		n/=10;
	}
	    printf("digit frequency\n");
	
    if(c0>0){
		printf("0= %ld times\n",c0);}
	if(c1>0){
		printf("1= %ld times\n",c1);}
	if(c2>0){
		printf("2= %ld times\n",c2);}
	if(c3>0){
		printf("3= %ld times\n",c3);}
	if(c4>0){
		printf("4= %ld times\n",c4);}
	if(c5>0){
		printf("5= %ld times\n",c5);}
	if(c6>0){
		printf("6= %ld times\n",c6);}
	if(c7>0){
		printf("7= %ld times\n",c7);}
	if(c8>0){
		printf("8= %ld times\n",c8);}
	if(c9>0){
		printf("9= %ld times\n",c9);}
		
		return 0;
}
