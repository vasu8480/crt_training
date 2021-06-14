#include<stdio.h>
#include<stdlib.h>
void manchester(int ,int *);
int main()
{
	int i,size,arr[100];
	scanf("%d",&size);
	for(i=0;i<size;i++)
	{
		scanf("%d",&arr[i]);
	}
	manchester(size,arr);
} 
void manchester(int size,int *arr)
{
	int result,i;
	int *res=(int *)malloc(sizeof(int)*size); 
	int count=0;
	for(i=0;i<size;i++)
	{
		if(i==0)
			result=(arr[i]==0);
		else
			result=(arr[i]==arr[i-1]);
			res[i]=(result)?(++count):0;
	}
	for(i=0;i<size;i++)
	{
		printf("%d ",res[i]);
	}
}