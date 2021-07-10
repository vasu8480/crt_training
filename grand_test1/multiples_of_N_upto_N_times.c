#include<stdio.h>
void printTable(int num)
{
	int i;
	for(i=1;i<=num;i++)
	{
		printf("%d ",num*i);
	}
}
int main()
{
	int num;
	scanf("%d",&num);
	printTable(num);
}


