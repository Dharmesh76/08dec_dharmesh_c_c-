#include<stdio.h>
#include<string.h>
int main()
{
	char string[30];
	int len;
	printf("enter your string : ");
	scanf("%s",&string);
	printf("your entered string is : %s\n",string);
	len = strlen(string);
	printf("your string's length is : %d\n",len);
}
