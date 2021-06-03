#include<stdio.h>
int sum=0;
int reverse(int num)
{
    int rem;
	if(num==0)
		return sum;  
    rem=num%10;
    sum=sum*10+rem;
    reverse(num/10);
}
int main()
{
	int num;
	scanf("%d",&num);
	printf("%d",reverse(num));
}