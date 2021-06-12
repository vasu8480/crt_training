#include<stdio.h>

void sortArray(int ,int *);
int main()
{
	int len,arr[100],i;
	scanf("%d",&len);
	for(i=0;i<len;i++)
	{
		scanf("%d",&arr[i]);
	}
	sortArray(len,arr);
	for(i=0;i<len;i++)
	{
		printf("%d ",arr[i]);
	}
}
void sortArray(int len,int *arr)
{
	int i,max,location,j,temp;
	for(i=0;i<len;i++)
	{
		max=arr[i];
		location=i;
		for(j=i;j<len;j++)
		{
			if(max<arr[j])
			{
				max=arr[j];
				location=j;
			}
		}
		temp=arr[i];
		arr[i]=arr[location];
		arr[location]=temp;
	}
}