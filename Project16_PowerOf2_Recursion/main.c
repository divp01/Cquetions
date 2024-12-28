//2^5 = 2*2*2*2*2 =32

#include<stdio.h>
int PowerOf2(int n)
{
    if(n == 0)
    {return 1;}

    return 2 * PowerOf2(n-1);
        
}

int main(void)
{   int n=5;
    int x = PowerOf2(n);
    printf("%d th power of 2 is %d",n,x);
    return 0;
}