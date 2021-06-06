#include<stdio.h>
int search(int *arr,int size,int key)
{
	int i,count=0;
	for(i=1;i<size;i++)
	{
		if(arr[i]==key)
		{
			count++;
		}
	}
	return count;
}
int main()
{
	int arr[100],i,size,key,count;
	scanf("%d",&size);
	for(i=0;i<size;i++)
	{
		scanf("%d",&arr[i]);
	}
	scanf("%d",&key);
	count=search(arr,size,key);
	printf("%d",count);
	
}