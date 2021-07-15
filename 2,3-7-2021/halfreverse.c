#include<stdio.h>
void selectionSortArray(int len,int *arr)
{
	int x=0,y=0,temp;
	for(x=0;x<len;x++)
	{
		int index_of_min=x;
		for(y=x;y<len;y++)
		{
			if(arr[index_of_min]>arr[y])
			{
				index_of_min=y;
			}
		}
		temp=arr[x];
		arr[x]=arr[index_of_min];
		arr[index_of_min]=temp;
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
	selectionSortArray(len,arr);
	for(i=0;i<len;i++)
	{
		printf("%d ",arr[i]);
	}
}
