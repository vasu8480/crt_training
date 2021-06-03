#include<stdio.h>
int digitsum(int n)
{
	if (n==0)
		return 0;
	else
  		return n%10+digitsum(n/10);
}
int main()
{
	int num;
	scanf("%d",&num);
	printf("%d",digitsum(num));
}
