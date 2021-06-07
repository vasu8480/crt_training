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
while(temp!=0)
{
temp=temp/10;
count++;
}
return (num%count);
}
