//wap to swap value
#include<stdio.h>
int main()
{
	int a,b;
	printf("enter the value of a: ");
	scanf("%d", &a);
	printf("enter the value of b: ");
	scanf("%d", &b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("\n swap value of a is: %d", a);
	printf("\n swap value of b is: %d", b);
}