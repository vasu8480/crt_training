#include<stdio.h>
#include<string.h>
void drawPrintPattern(int);
int main()
{
	int num;
	scanf("%d",&num);
	drawPrintPattern(num);
} 
void drawPrintPattern(int num)
{
	for(int i=1;i<=num;i++)
	{
		for(int j=1;j<=2*i;j++)
		{
			printf("%d",1);
		}
		printf("\n");
	}
}
