#include<stdio.h>
void PrintHBD(int n)
{   
    if(n==1)
   { printf("%d day left for Bithday\n",n);
     return;
   }
    printf("%d day left for Bithday\n",n);
    PrintHBD(n-1);
}

int main(void)
{
    PrintHBD(5);
    return 0;
}