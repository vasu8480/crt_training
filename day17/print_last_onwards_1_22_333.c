#include<stdio.h>
void printPattern(int num)
{
	int i,j;
	for(i=1;i<=num;i++)
	{
	    for(int k=0;k<num-i;k++)
	    {
	        printf(" ");
	    }
		for(j=1;j<=i;j++)
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