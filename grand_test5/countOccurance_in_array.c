#include<stdio.h>
int countOccurance(int len,int value,int *arr)
{
	int i=0,count =0;
	while(i<len)
	{
		if(arr[i] == value)
			count += 1;
		i+=1;
	}
	return count;
}
int main()
{
	int i,arr[100],len,count,val;
	scanf("%d",&len);
	scanf("%d",&val);
	for(i=0;i<len;i++)
	{
		scanf("%d",&arr[i]);
	}
	
	count=countOccurance(len,val,arr);
	
	printf("%d ",count);
	
}