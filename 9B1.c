#include<stdio.h>
void main()
{
	char ch1='a',ch2='A';
	
	printf("the lowercase alphabet\n");
	while(ch1<='z'){
		printf("%c\n",ch1);
		ch1++;
	}
	
	printf("the uppercase alphabet\n");
	while(ch2<='Z'){
		printf("%c\n",ch2);
		ch2++;
	}
}
