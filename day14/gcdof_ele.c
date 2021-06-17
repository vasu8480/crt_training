#include<stdio.h>
int gcd(int a, int b)
{
	if (b == 0) 
        return a; 
    return gcd(b, a % b); 
}

int calculateGeneralLCM(int *arr, int len)
{
    int ans = arr[0]; 
    for (int i = 1; i < len; i++)
    {
        ans = (((arr[i] * ans)) / (gcd(arr[i], ans))); 
    }
    return ans; 
}
int main()
{
	int res,arr[100],len,i;
	scanf("%d",&len);
	for(i=0;i<len;i++)
	{
		scanf("%d",&arr[i]);
	}
	res=calculateGeneralLCM(arr,len);
	printf("%d",res);
}