#include<stdio.h>

void selectionSortArray(int ,int *);
int main()
{
	int len,arr[100],i;
	scanf("%d",&len);
	for(i=0;i<len;i++)
	{
		scanf("%d",&arr[i]);
	}
	selectionSortArray(len,arr);
} 
void selectionSortArray(int len,int *arr)
{
	int x=0,y=0; 
	for(x=0;x<len-1;x++)
	{
		int index_of_min=x;
		for(y=x+1;y<len;y++)
		{
			if(arr[index_of_min]>arr[y])
			{ 
				index_of_min=y;
			}
		}
		int temp=arr[x];
		arr[x]=arr[index_of_min];
		arr[index_of_min]=temp;
	}
	for(x=0;x<len;x++)
	{
		printf("%d ",arr[x]);
	}
}