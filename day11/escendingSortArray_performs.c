#include<stdio.h>

void descendingSortArray(int len, int *arr);
int main()
{
	int len,arr[100],i;
	scanf("%d",&len);
	for(i=0;i<len;i++)
	{
		scanf("%d",&arr[i]);
	}
	descendingSortArray(len, arr);
} 
void descendingSortArray(int len, int *arr)
{
	int i,j;
	for(i=0;i<len;i++)
	{
		for(j=0;j<len-i-1;j++)
		{
			int temp=0;
			if(arr[j]<arr[j+1])
			{
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
	for(i=0;i<len;i++)
	{
		printf("%d ",arr[i]);
	}

}