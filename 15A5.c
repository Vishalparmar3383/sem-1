#include<stdio.h>    
#include<string.h>
void main()
{
	char str[1000];
	int length;
	
	printf("enter the string :");
	gets(str);
	
	length=strlen(str);
	
	printf("string is : %s\n",str);
	printf("the length of string: %d\n",length);
}
