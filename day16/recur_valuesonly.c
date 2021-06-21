#include<stdio.h>

void printFibonacci(int num);
int main()
{
	long int num;
	scanf("%ld",&num);
	printFibonacci(num);
	
} 
void printFibonacci(int num)
{
	long num1=0; 
	long num2=1;
	int i;
	for(i=0;i<num;++i)
	{
		printf("%ld ",num1); 
		long sum=num1+num2; 
		num1=num2;
		num2=sum; 
	}
}