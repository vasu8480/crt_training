#include<stdio.h>
int factorCount(int num)
{
	int i,fc=0;
	for(i=1;i<=num/2;i++)
	{
		if(num%i==0)
		{
			fc++;
		}
	}
	return fc;
}
int main()
{
	int num;
	scanf("%d",&num);
	printf("%d",factorCount(num));
}

