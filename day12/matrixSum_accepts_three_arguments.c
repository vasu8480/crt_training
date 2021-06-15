#include<stdio.h>
#include<stdlib.h>
int matrixSum(int rows,int columns, int **matrix);

int main()
{
	int rows,columns,i,j,**matrix;
	scanf("%d%d",&rows,&columns);
	matrix = (int **)malloc(rows * sizeof(int *));
	
    for (i=0; i<rows; i++)
         matrix[i] = (int *)malloc(columns * sizeof(int));
	
	for(i=0;i<rows;i++)
	{
		for(j=0;j<columns;j++)
		{
			scanf("%d",&matrix[i][j]);
		}
	}
	printf("%d",matrixSum(rows,columns,matrix));
}

int matrixSum(int rows,int columns, int **matrix)
{
	int i,j,sum=0;
	for(i=0;i<rows;i++)
	{
		for(j=0;j<columns;j++)
		{
			sum+=matrix[i][j];
		}
	}
	return sum;
}
