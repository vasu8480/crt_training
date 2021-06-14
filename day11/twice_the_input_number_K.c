#include<stdio.h>
int sumElement(int, int,int *);
int main()
{
	int res,i,size,inputArray[100],numk;
	scanf("%d",&size);
	for(i=0;i<size;i++)
	{
		scanf("%d",&inputArray[i]);
	}
	scanf("%d",&numk);
	res=sumElement(size,numk,inputArray);
	printf("%d",res);
} 
int sumElement(int size, int numK,int *inputArray)
{
	int i,sum=0; 
	for(i=0;i<size;i++)
	{
		if(inputArray[i]>(2*numK) && i%2==0)
		{
			sum=sum+inputArray[i];
		}
	}
	return sum;
}