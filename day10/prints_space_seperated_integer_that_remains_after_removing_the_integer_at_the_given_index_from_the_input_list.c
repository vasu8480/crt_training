#include<stdio.h>
void removeElement(int ,int ,int *);
int main()
{
	int size,i,indexValue,inputList[100];
	scanf("%d",&size);
	for(i=0;i<size;i++)
	{
		scanf("%d",&inputList[i]);
	}
	scanf("%d",&indexValue);
	removeElement(size,indexValue,inputList);
}
void removeElement(int size,int indexValue,int *inputList)
{
	int i;
	if(indexValue<size)
	{

		for(i=indexValue;i<size;i++)
		{
			inputList[i]=inputList[i+1];
		}
	
		for(i=0;i<size-1;i++)
		{
			printf("%d ",inputList[i]);
		}
	}
	else
	{
		for(i=0;i<size;i++)
		{
			printf("%d ",inputList[i]);
		}
	}
}

