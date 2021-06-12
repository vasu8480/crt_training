#include<stdio.h>
void arrayReverse(int,int *);
int main()
{
	int i,len,arr[100];
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
	return 0;
}
void arrayReverse(int len,int *arr)
{
	int i,temp,originalLen=len;
	for(i=0;i<originalLen/2;i++)
	{
		temp=arr[len-1];
		arr[len-1]=arr[i];
		arr[i]=temp;
		len-=1;
	}
}
