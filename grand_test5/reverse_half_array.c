#include<stdio.h>
void reverseHalfArray(int size,int *inputList)
{
	int i,temp;
	for(i=size/2;i<size;i++)
	{
		temp=inputList[size-1];
		inputList[size-1]=inputList[i];
		inputList[i]=temp;
		size-=1;
	}
}
int main()
{
	int i,arr[100],len;
	scanf("%d",&len);
	for(i=0;i<len;i++)
	{
		scanf("%d",&arr[i]);
	}
	reverseHalfArray(len,arr);
	for(i=0;i<len;i++)
	{
		printf("%d ",arr[i]);
	}
}