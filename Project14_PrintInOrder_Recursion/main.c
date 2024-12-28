#include<stdio.h>
void PrintInIncreasingOrder(int n)
{
    if(n==1)
        {
            printf("%d\n",n);
            return;
        }
    PrintInIncreasingOrder(n-1);
    printf("%d\n",n);
    return;
}
void PrintInDecreasingOrder(int n)
{
    if(n==1)
        {
            printf("%d\n",n);
            return;
        }
    printf("%d\n",n);
    PrintInDecreasingOrder(n-1);
   
    return;
}
int main(void)
{
    PrintInIncreasingOrder(7);
    PrintInDecreasingOrder(7);
    return 0;
}