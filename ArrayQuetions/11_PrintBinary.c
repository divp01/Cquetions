#include<stdio.h>
void PrintBinary(int num)
{
    if(num == 1)
    {
        printf("1");
        return;
    }
    PrintBinary(num/2);
    printf("%d",num%2);
}
int main(void)
{   int num=6;
PrintBinary(num);
    return 0;
}