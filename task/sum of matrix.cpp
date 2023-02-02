#include<stdio.h>
int main()
{
	int matrixA[3][3],matrixB[3][3],SumOfMatrix[3][3];
	int i,j;
	printf("<----------------enter value of matrixA------------------->\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("enter value of A[%d][%d]: ",i,j);
			scanf("%d",&matrixA[i][j]);
		}
	}
	printf("<----------------enter value of matrixB------------------->\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("enter value of B[%d][%d]: ",i,j);
			scanf("%d",&matrixB[i][j]);
		}
	}
	for (i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			SumOfMatrix[i][j] = matrixA[i][j] + matrixB[i][j];
		}
	}
	printf("<-------------------------sum of matrices----------------------->\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf(" %d",SumOfMatrix[i][j]);
		}
		printf("\n");
	}
	return 0;
}
