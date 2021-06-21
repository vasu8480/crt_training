#include<stdio.h>
void printCharacterPattern(int);
int main()
{
	int num;
	scanf("%d",&num);
	printCharacterPattern(num);
}
void printCharacterPattern(int num)
{
	int i,j;
	char ch='a';
	char print;
	for(i=0;i<num;i++)
	{
		print=ch;
		for(j=0;j<=i;j++)
		{
			printf("%c",print++);
		}
		printf("\n");
	}
}