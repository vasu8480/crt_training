#include <stdio.h>

int* sortArray(int *arr, int len)
{
	int i=0, j=0, temp=0;
	for(i=0;i<len;i++)
	{
		for(j=i+1;j<len;j++)
		{
			if(arr[i]>arr[j])
			{
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
	return arr;
}

int findElement (int *arr1, int len1, int *arr2, int len2)
{
	// write your code here
	sortArray(arr1,len1);
	sortArray(arr2,len2);
	if(arr1[0]<arr2[0])
	{
	    return arr1[0];
	}
	return arr2[0];
}




int main() {
	int n,k;
	scanf("%d %d",&n,&k);
	int arr1[n];
	int arr2[k];
	for(int i=0;i<n;i++)
	{
	    scanf("%d",&arr1[i]);
	}
	for(int i=0;i<n;i++)
	{
	    scanf("%d",&arr2[i]);
	}
	int res;
	res=findElement(arr1,n,arr2,k);
	printf("%d",res);
	return 0;
}