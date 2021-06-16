#include <stdio.h>

int binarySearch(int* ar, int len, int target)
{
	int lo = 0, hi = len - 1;
	while (lo <= hi)
	{
		int mid = lo + (hi-lo)/2;
		if(ar[mid] == target)
		{
			return mid;
		}
		else
			if(ar[mid] < target)
			{
				lo = mid+1;
			}
			else{
				hi = mid - 1;
			}
	}
	return -1;
}



int main() {
	int n,k;
	scanf("%d %d",&n,&k);
	int arr[n];
	for(int i=0;i<n;i++)
	{
	    scanf("%d",&arr[i]);
	}
	int res;
	res=binarySearch(arr,n,k);
	printf("%d",res);
	return 0;
}