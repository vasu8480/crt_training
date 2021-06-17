#include<stdio.h>
int* sortArray(int *arr, int len)
{
	int i=0,j=0,temp=0;
	for(i=0;i<len;i++)
	{
		for(j=i+1;j<len;j++)
		{
			if(arr[i] > arr[j])
			{
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
	return arr;
}

int findMinElement(int *arr1, int len1, int *arr2, int len2)
{
	// write your code here
	sortArray(arr1, len1);
	sortArray(arr2, len2);
	if(arr1[0]<arr2[0])
	{
	    return arr1[0];
	}
	else
	{
	    return arr2[0];
	}
}
int main()
{
	int res,arr1[100],len1,i,arr2[100],len2;
	scanf("%d%d",&len1,&len2);
	for(i=0;i<len1;i++)
	{
		scanf("%d",&arr1[i]);
	}
	for(i=0;i<len2;i++)
	{
		scanf("%d",&arr2[i]);
	}
	res=findMinElement(arr1,len1,arr2,len2);
	printf("%d",res);
}