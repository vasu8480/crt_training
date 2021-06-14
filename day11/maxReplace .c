#include<stdio.h>
void maxReplace(int size,int *inputList);
int main()
{
	int i,size,inputList[100]	;
	scanf("%d",&size);
	for(i=0;i<size;i++)
	{
		scanf("%d",&inputList[i]);
	}
	maxReplace(size,inputList);
} 
void maxReplace(int size,int *inputList)
{
	int i;
	int max=inputList[0];
	if(size>0)
	{
		for(i=0;i<size;i++)
		{
			if(max<inputList[i])
			{
				max=inputList[i];
			}
		}
	}
	for(i=0;i<size;i++)
	{
		inputList[i]=max;
		printf("%d ",inputList[i]);
	}
}