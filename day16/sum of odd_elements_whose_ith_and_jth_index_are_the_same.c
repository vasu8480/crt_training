#include<stdio.h>
#include<stdlib.h>
int calculateMatrixSum(int,int,int **);
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
	printf("%d",calculateMatrixSum(rows,columns,matrix));
}
int calculateMatrixSum(int rows,int columns,int ** matrix)
{
	int i,j,sum=0;
	if((rows>0)&&(columns>0))
	{
		for(i=0;i<rows;i++)
		{
			for(j=0;j<columns;j++)
			{
				if(i==j)
				{
					if(matrix[i][j]%2!=0)
						sum+=matrix[i][j];
				}
			}
		}
		return sum;
	}
	else
		return sum;
}