#include <stdio.h>
int sumOfUnique(int* nums, int numsSize)
{
    int sum=0,i,j,s;
    for(i=0;i<numsSize;i++)
    {
        s=1;
        for(j=0;j<numsSize;j++)
        {
            if(i!=j && nums[i]==nums[j])
            {
                s=0;
                break;
            }
        }
        if(s==1)
        {
            sum+=nums[i];
        }
    }
    return sum;
}
int main()
{
	int c,i,arr[100],n;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	c=sumOfUnique(arr,n);
	printf("%d",c);
	return 0;
}