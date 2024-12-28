#include<stdio.h>
void PrintEvenNum(int n)
{
 if(n==2)
 {
    printf("%d\n",n);
    return;
 }
 printf("%d\n",n);
 PrintEvenNum(n-2);

}

int main(void)
{
PrintEvenNum(20);
    return 0;
}