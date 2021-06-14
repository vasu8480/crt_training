#include<stdio.h>

void patternPrint(int);
int main()
{
	int num;
	scanf("%d", &num);
	patternPrint(num);
} 
void patternPrint(int num)
{
	for(int i=0;i<num;i++)
	{
		for(int j=0;j<=i;j++)
		{
			printf("%d",1);
		}
		printf("\n");
	}
}