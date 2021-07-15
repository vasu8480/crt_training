#include<stdio.h>
int multiplyNumber(int numA,int numB,int numC)
{
	int result,min,max,mid;
	max = (numA>numB) ?(numA>numC ? numA:numC) :(numB>numC ? numB:numC);
	min = (numA<numB) ?(numA<numC ? numA:numC) :(numB<numC?numB:numC);
	mid = (numA+numB+numC)-(min+max);
	result = (max*mid);
	return result;
}
int main()
{
	int numA,numB,numC,res;
	scanf("%d%d%d",&numA,&numB,&numC);
	res=multiplyNumber(numA,numB,numC);
	printf("%d",res);
}
