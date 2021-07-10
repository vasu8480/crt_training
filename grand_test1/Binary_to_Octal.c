#include<stdio.h>
#include <math.h>
int binarytodecimal(long num)
{
        int decimalnum = 0, temp = 0, remainder;
    while (num!=0)
    {
        remainder =num % 10;
        num = num / 10;
        decimalnum = decimalnum + remainder*pow(2,temp);
        temp++;
    }
    return decimalnum;
}
int main()
{
  int num;
  scanf("%d",&num);
  printf("%d",binarytodecimal(num));
}