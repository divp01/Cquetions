#include<stdio.h>
#include<stdbool.h>

bool PowerOf2(int num)
{   
    if (num<1)
        {return 0;}
    else
    {
        while(num != 1)
        {
         
         

         if( num%2 != 0)
          return 0;

        num = num/2;

        }
        return 1;

    }
}
int main(void)
{   int a= 31;
    bool X = PowerOf2(a);
    if(X==1)
        printf("%d is power of 2",a);
    else
        printf("%d is  not power of 2",a);
    
    return 0;
}