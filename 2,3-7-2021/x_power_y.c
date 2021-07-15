#include<stdio.h>
#include<math.h>
//find x power y, given function that computes positive power only.
float positiveExponent(x,y)
{
	return pow(x,y);
}
float allExponent(int baseValue,int exponentValue)
{
	float res=1;
	if(exponentValue >=0)
	{
	res=(float) positiveExponent(baseValue,exponentValue);
	}
	else
	{
	//write your code here for negative value of exponent
	res=(float) positiveExponent(baseValue,exponentValue);
	res=1/res;
	}
	return res;
}

void main()
{
	int x,y;
	scanf("%d%d",&x,&y);
	printf("%f",allExponent(x,y));
	
}
