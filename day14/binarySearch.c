#include<stdio.h>
int binarySearch(int* arr, int len, int target)
{
	int lo = 0, hi = len - 1;
	while (lo <= hi)
	{
		int mid = lo + (hi-lo)/2;
		if(arr[mid] == target)
		{
			return mid;
		}
		else if(arr[mid] < target)
		{
			lo = mid+1;
		}
		else
		{
			hi = mid - 1;
		}
	}
	return -1;
}
int main()
{
	int res,arr[100],len,i,target;
	scanf("%d",&len);
	for(i=0;i<len;i++)
	{
		scanf("%d",&arr[i]);
	}
	scanf("%d",&target);
	res=binarySearch(arr,len,target);
	printf("%d",res);
}