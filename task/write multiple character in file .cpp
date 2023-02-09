#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE *fptr;
	fptr = fopen("name.txt","w");
	
	char name[100];
	printf("enter the name : ");
	scanf("s",&name);
	fprintf(fptr,"%s",name);
	fclose(fptr);
	
	
}
