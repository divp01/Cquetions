#include<stdio.h>
// 0,1,2,3,5,8,13
int FibonacciSeries(int n)
{
if(n==0)
 return 0;
if(n==1)
 return 1;

return FibonacciSeries(n-2)+ FibonacciSeries(n-1);
}
int main(void)
{   int n =7;
    printf("%d th elemnt of series is %d",n,FibonacciSeries(n));
    return 0;
}