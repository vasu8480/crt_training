#include<stdio.h>
int digitsum(int num)
{
	if (num==0)
		return 0;
	else
  		return num%10+digitsum(num/10);
}
int main()
{
	int num;
	scanf("%d",&num);
	printf("%d",digitsum(num));
}
