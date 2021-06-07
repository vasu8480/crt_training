#include<stdio.h>
void printPattern(int num)
{
	int i,j,k;
	for(i=1;i<=num;i++)
	{
		for(k=1;k<=(num-i);k++)
		{
			printf(" ");
		}
		for(j=1;j<=i;j++)
		{
			printf("*");
		}
		printf("\n");
	}
}
int main()
{
	int num;
	scanf("%d",&num);
	printPattern(num);
}