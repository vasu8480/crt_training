#include<stdio.h>
void printPattern(int num)
{
	int i,j;
	for(i=1;i<=num;i++)
	{
		for(j=0;j<num;j++)
		{
			printf("%d",i);
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