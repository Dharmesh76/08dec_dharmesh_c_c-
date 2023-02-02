#include<stdio.h>
int main()
{
	int matriceA[3][3],matriceB[3][3],SumOfMatrice[3][3];
	int i,j;
	printf("<----------------enter value of matricA------------------->\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("enter value of A[%d][%d]: ",i,j);
			scanf("%d",&matriceA[i][j]);
		}
	}
	printf("<----------------enter value of matriceB------------------->\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("enter value of B[%d][%d]: ",i,j);
			scanf("%d",&matriceB[i][j]);
		}
	}
	for (i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			SumOfMatrice[i][j] = matriceA[i][j] + matriceB[i][j];
		}
	}
	printf("<-------------------------sum of matrices----------------------->\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf(" %d",SumOfMatrice[i][j]);
		}
		printf("\n");
	}
	return 0;
}
