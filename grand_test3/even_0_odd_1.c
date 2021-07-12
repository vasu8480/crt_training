#include<stdio.h>
#include<math.h>
int isprime(int num)
{
	int i,sq;
	sq=sqrt(num);
	for(i=2;i<=sq;i++)
	{
		if(num%i==0)
		{
			return 0;
		}
	}
return 1;
}
int main()
{
	int num;
	scanf("%d",&num);
	printf("%d",isprime(num));
}