#include<stdio.h>
void reverse(int *arr,int size)
{
	int i,j,temp;
	for(i=0;i<size;i++)
	{
		for(j=0;j<i;j++)
		if(arr[i]>arr[j])
		{
		
		temp=arr[i];
		arr[i]=arr[j];
		arr[j]=temp;
	}
	
}
return ;
}
int main()
{
	int arr[100],n,i;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	reverse(arr,n);
	for(i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
}