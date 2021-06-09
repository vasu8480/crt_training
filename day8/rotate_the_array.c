#include <stdio.h>
void leftRotatebyOne(int *arr, int n)
{
	int temp = arr[0], i;
	for (i = 0; i < n - 1; i++)
		arr[i] = arr[i + 1];
	arr[n-1] = temp;
}
void leftRotate(int *arr, int d, int n)
{
	//write ur code here
	for(int i=0;i<d;i++)
	{
	    leftRotatebyOne(arr,n);
	}
}

int main()
{
	int i,arr[100],n,r;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	scanf("%d",&r);
	leftRotate(arr, r, n);
	for(i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
	return 0;
}