#include<stdio.h>
#include<string.h>
int checkBirthday(char *,int);
int main()
{
	char month[100];
	int day;
	scanf("%s",month);
	scanf("%d",&day);
	printf("%d",checkBirthday(month,day));
} 
int checkBirthday(char *month,int day)
{
	if((strcmp(month,"July")==0) && (day==5))
		return 1;
	else
		return 0;
}
