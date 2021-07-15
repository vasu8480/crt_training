/*
reverse the second half of array elements
Example1:
Input: 7, [1, 2, 3, 4, 5, 6, 7]
Output:1, 2, 3, 7, 6, 5, 4
Example2:
Input: 4, [1, 2, 3, 4]
Output:1, 2, 4, 3
*/
#include<stdio.h>
void reverseHalfArray(int size,int *inputList)
{
	int i,temp;
	for(i=size/2;i<size;i++)
	{
		temp=inputList[size-1];
		inputList[size-1]=inputList[i];
		inputList[i]=temp;
		size-=1;
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
	reverseHalfArray(len,arr);
	for(i=0;i<len;i++)
	{
		printf("%d ",arr[i]);
	}
}
/*
input
 7
 1 2 3 4 5 6 7
 output
 1 2 3 7 6 5 4
 
 input:
 4
 1 2 3 4
 1 2 4 3
