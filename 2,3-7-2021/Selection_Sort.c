//replace all odd elements with minimum element and
//all even elements with maximum element
#include<stdio.h>
void replaceMinMax(int size, int *arr)
{
	int i;
	if(size>0) 
	{
		int max=arr[0];
		int min=arr[0];
		for(i=0;i<size;i++)
		{
			if(max<arr[i])
			{
				max=arr[i];
			}
			else if(min>arr[i])
			{
				min=arr[i];
			}
		}
		for(i=0;i<size;i++)
		{
			if(arr[i]%2==0)
				arr[i]=max;
			else
				arr[i]=min;
		}
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
	replaceMinMax(len,arr);
	for(i=0;i<len;i++)
	{
		printf("%d ",arr[i]);
	}
}
