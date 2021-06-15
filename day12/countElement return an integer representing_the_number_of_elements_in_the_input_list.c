#include<stdio.h>
#include<stdlib.h>
int countElement(int ,int,int *);

int main()
{
	int size,num,inputList[100],i,val;
	scanf("%d",&size);
	for(i=0;i<size;i++)
	{
		scanf("%d",&inputList[i]);
	}
	scanf("%d",&num);
	val=countElement(size,num,inputList);
	printf("%d",val);
}

int countElement(int size,int numK,int *inputList)
{
	int i,count=0;
	for(i=0;i<size;i++)
	{
		if(inputList[i]>2*numK)
		{
			count+=1;
		}
	}
	return count;
}

