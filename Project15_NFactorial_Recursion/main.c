// 5 = 5*4*3*2*1

#include<stdio.h>
int NFactorial(int n)
{
    if(n == 1)
    {return 1;}
    return n * NFactorial(n-1);
        
}

int main(void)
{   int n=3;
    int x = NFactorial(n);
    printf("%d 's Factorial is %d",n,x);
    return 0;
}