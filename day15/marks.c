#include<stdio.h>
char checkGrade(int marks)
{
	if(marks<=60)
		return 'D';
	else if((61<=marks) && (marks<=75))
			return 'C';
	else if((76<=marks)&&(marks<=90))
			return 'B';
	else
		return 'A';
}
int main()
{
	int marks;
	scanf("%d",&marks);
	printf("%c",checkGrade(marks));
}