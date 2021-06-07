#include<stdio.h>
int findMaxElement(int ,int *,int ,int *);
int *sortArray(int ,int *);
int main()
{
	int len1,len2,arr1[100],arr2[100],i,max;
	scanf("%d",&len1);
	for(i=0;i<len1;i++)
	{
		scanf("%d",&arr1[i]);
	}
	scanf("%d",&len2);
	for(i=0;i<len2;i++)
	{
		scanf("%d",&arr2[i]);
	}
	max=findMaxElement(len1,arr1,len2,arr2);
	printf("%d",max);
}


int *sortArray(int len,int *arr)
{
	int i=0,j=0,temp=0;
	for(i=0;i<len;i++)
	{
		for(j=i+1;j<len;j++)
		{
			if(arr[i]>arr[j])
			{
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}
	return arr;
}

int findMaxElement(int len1,int *arr1,int len2,int *arr2)
{
	//write your code here
	arr1=sortArray(len1,arr1);
	arr2=sortArray(len2,arr2);
	if(arr1[len1-1]>arr2[len2-1])
	{
		return arr1[len1-1];
	}
	else
		return arr2[len2-1];
}