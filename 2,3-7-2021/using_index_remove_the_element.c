#include<stdio.h>
void removeElement(int size,int indexValue,int *inputList)
{
	int i,j;
	if(indexValue<size) 
	{
		for(i= indexValue;i<size-1;i++) 
		{
			inputList[i] = inputList[i]+1;
		}
		for(i=0;i<size-1;i++)
			printf("%d ",inputList[i]);
	}
	else 
	{	
		for(i=0;i<size;i++)
			printf("%d ",inputList[i]);
	}
}

int main()
{
	int i,arr[100],len,ind;
	scanf("%d",&len);
	scanf("%d",&ind);
	for(i=0;i<len;i++)
	{
		scanf("%d",&arr[i]);
	}
	removeElement(len,ind,arr);
	
}
