#include<stdio.h>

void printpattern(int num)
{
    int i, k=num/2,print =0;
    if(num % 2 == 0)
    {
        print=0;
        
    for(i = 0; i <=num+k; i ++)
    {
	if(i%2==0)
	{
	printf("%d ",print);
    print +=2;
	}
	}
}
    else
	{
        print=1;
        for(i=0; i<=num+k+1 ; i++ )
        if(i%2!=0)
        {
         	printf("%d ",print);
        print +=2;
    }
}
}
int main()
{
	int num;
	scanf("%d",&num);
	printpattern(num);
	
}