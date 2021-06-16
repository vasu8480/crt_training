#include <stdio.h>

int getArraySum(int *arr, int len) {
	int sum = 0, i;
	for(i=0;i<len;i=i+1) {
		sum += arr[i];
	}
	return sum;
}


int main() {
	int n;
	scanf("%d",&n);
	int arr[n];
	for(int i=0;i<n;i++)
	{
	    scanf("%d",&arr[i]);
	}
	int res;
	res=getArraySum(arr,n);
	printf("%d",res);
	return 0;
}