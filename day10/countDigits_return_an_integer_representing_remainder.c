#include<stdio.h>
int countDigits(int);
int main()
{
	int num;
	scanf("%d",&num);
	printf("%d",countDigits(num));
}
int countDigits(int num)
{
	int count=0,temp=num;
	while(num!=0)
	{
		num=num/10;
		count++;
	}
	return (temp%count);
}
