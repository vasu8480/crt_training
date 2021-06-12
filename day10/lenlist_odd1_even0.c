#include<stdio.h>

void replaceValues(int ,int *);
int main()
{
	int len,arr[100],i;
	scanf("%d",&len);
	for(i=0;i<len;i++)
	{
		scanf("%d",&arr[i]);
	}
	replaceValues(len,arr);
	for(i=0;i<len;i++)
	{
		printf("%d ",arr[i]);
	}
}
void replaceValues(int size,int *inputList)
{
	int i,j;
	if(size%2==0)
	{
		i=0;
		while(i<size)
		{
			inputList[i]=0;
			i+=1;
		}
	}
	else
	{
		j=0;
		while(j<size)
		{
			inputList[j]=1;
			j+=1;
		}
	}
}