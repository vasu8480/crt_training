#include<stdio.h>
int arrayReverse(int len,int* arr)
{
	int i,temp,originallen = len;
	for(i= 0;i<originallen/2;i++)
	{
		temp=arr[len-1];
		arr[len-1] =arr[i];
		arr[i] = temp;
		len -= 1;
	}
}
int main()
{
	int i,arr[100],len;
	scanf("%d",&len);
	for(i=0;i<len;i++)
	{
		scanf("%d",&arr[i]);
	}
	arrayReverse(len,arr);
	for(i=0;i<len;i++)
	{
		printf("%d ",arr[i]);
	}
}
/*
input
5
1 2 3 4 5
ouput:
5 4 3 2 1
input:
4
1 2 3 4
ouput:
4 3 2 1
*/

