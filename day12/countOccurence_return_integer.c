#include<stdio.h>
#include<string.h>
int countOccurence(int , int,int *);
int main()
{
	int size,arr[100],i,value;
	scanf("%d",&size);
	for(i=0;i<size;i++)
	{
		scanf("%d",&arr[i]);
	}
	scanf("%d",&value);
	printf("%d",countOccurence(size,value,arr));
} 
int countOccurence(int len, int value,int *arr)
{
	int i=0,count=0;
	for ( i=0; i<len; i++)
	{
		if(arr[i]==value)
		{
			count+=1;
		}
		
	}
	return count;
}
