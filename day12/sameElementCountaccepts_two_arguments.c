#include<stdio.h>
#include<string.h>
int sameElementCount(int,int *);
int main()
{
	int size,arr[100],i;
	scanf("%d",&size);
	for(i=0;i<size;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("%d",sameElementCount(size,arr));
} 
int sameElementCount(int size,int *inputList)
{
	int i,count=0;
	for(i=0;i<size;i++)
	{
		if((inputList[i]%2==0)&&(inputList[i]==inputList[i+1]))
		{
			count++;
		}
	}
	return count;
}