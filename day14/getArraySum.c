#include<stdio.h>
int getArraySum(int *arr, int len) 
{
	int sum = 0, i;
	for(i=0;i<len;i=i+1) {
		sum = sum+arr[i];
	}
	return sum;
}

int main()
{
	int res,arr[100],len,i;
	scanf("%d",&len);
	for(i=0;i<len;i++)
	{
		scanf("%d",&arr[i]);
	}
	res=getArraySum(arr,len);
	printf("%d",res);
}