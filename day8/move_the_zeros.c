#include <stdio.h>
void moveZeroes(int* nums, int numsSize)
{
    int i=0, j=0;
    while(i<numsSize)
	{
        if(nums[i]!=0)
		{
            int tmp = nums[i];
            nums[i] = nums[j];
            nums[j] = tmp;
            ++j;
        }
        i++;
    }
    return ;
}
int main()
{
	int i,arr[100],n;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	moveZeroes(arr,n);
	for(i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
	return 0;
}