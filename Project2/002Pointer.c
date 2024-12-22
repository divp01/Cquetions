#include<stdio.h>
int main()
{
    int a=5,b=10;
    int *ptra, *ptrb;
    printf(" before assignning address to point  *a  = %p & *b = %p \n",ptra,ptrb);
    printf(" a = %d, b = %d \n ",a,b);
    printf("address of a = %p and b = %p \n", &a,&b);
    ptra = &a;
    ptrb = &b;
    printf(" after assignning address to point  *a  = %p & *b = %p \n",ptra,ptrb);
    return 0;
}