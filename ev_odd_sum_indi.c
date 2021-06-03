#include<stdio.h>
int sum(int n)
{
	if (n==2)
		return 2;
	else if(n==n%2)
		return n;
	else
  		return n+(sum(n-2));
  	
}
int main()
{
	int num;
	scanf("%d",&num);
	printf("%d",sum(num));
}