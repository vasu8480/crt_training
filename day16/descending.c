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
	int i,j,temp;
	for(i=0;i<=len-1;i++)
	{
		for(j=i;j<len;j++)
		{
			temp=0;
			if(arr[i]<arr[j])
			{
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}
	for(i=0;i<len;i++)
	{
		printf("%d ",arr[i]);
	}

}