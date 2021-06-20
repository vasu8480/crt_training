#include<stdio.h>
int getSum(int num)
{
	
    int sum=0;
    while(num!=0)
    {
        sum=sum+(num%10);
        num=num/10;
    }
    return sum; 
}
int getDigitsum(int *arr,int len)
{
    int i,min,result;
    for(i=0, min =arr[0]; i <len; i++)
    {
        if(arr[i]<min)
            min=arr[i];
    }
    result=getSum(min);
    if(result%2==0)
        return 1;
    else
        return 0;
}
int main()
{
	int arr[100],len,i;
	scanf("%d",&len);
	for(i=0;i<len;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("%d",getDigitsum(arr,len));
}