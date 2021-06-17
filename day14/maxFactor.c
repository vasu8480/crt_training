#include<stdio.h>
int calculateFactor(int inputNumber);
int checkGreatestFactor(int num)
{
	if(num == 0)
		return 0;
	else
		return (calculateFactor(num));
}

int calculateFactor(int num)
{
	int i = 0, maxFactor = 0;
	for(i=1;i<num;i++)
	{
		if(num%i==0)
			maxFactor = i;
	}
	return maxFactor;
}
int main()
{
	int num;
	scanf("%d",&num);
	num=calculateFactor(num);
	printf("%d",num);
}