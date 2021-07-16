#include<stdio.h>
void removeelement(int *arr,int size,int k)
{
	int i,j;
	for (i=0; i<size; i++)
    if (arr[i] == k)
        break;
	if (i < size)
	{
    	size = size - 1;
    	for (j=i; j<size; j++)
        	arr[j] = arr[j+1];
	}
}
int main()
{
	int arr[100],n,i,k;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	scanf("%d",&k);
	removeelement(arr,n,k);
	for(i=0;i<n-1;i++)
	{
		printf("%d ",arr[i]);
	}
}