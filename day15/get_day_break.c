#include<stdio.h>
#include<string.h>
char *getDay(int num)
{
	static char str[100];
    switch(num)
    {
        case 1:
        	strcpy(str,"monday");
            
        case 2:
            strcpy(str,"Tuesday");
            break;
        case 3:
        	strcpy(str,"Wednesday");
            
        case 4:
        	strcpy(str,"Thurday");
            
        case 5:
        	strcpy(str,"Friday");
            
        case 6:
        	strcpy(str,"Saturday");
            
        case 7:
        	strcpy(str,"Sunday");
            
        default:
        	strcpy(str,"invalid");
    }
    return str;
}
int main()
{
	int num;
	char *str;
	scanf("%d",&num);
	str=getDay(num);
	printf("%s",str);
}
