#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void SwapUsingPointer(int *p1, int*p2)
{
  int temp = *p1;
  *p1 = *p2;
  *p2 = temp;

}

void GenericSwapUsingPointer(void* p1, void* p2, int size)
{ //size in bytes
  void* ptr = malloc(size);
  memcpy(ptr, p1, size);
  memcpy(p1 , p2, size);
  memcpy(p2,ptr,size);

}

void SwapUsingAddition(int *p1, int*p2)
{
 *p1 = *p1 +*p2;
 *p2 = *p1-*p2;
 *p1=*p1 -*p2;
}

void SwapUsingMultiplication(int *p1, int*p2)
{
 *p1 = *p1 * *p2;
 *p2 = *p1 / *p2;
 *p1=*p1 / *p2;
}

int main(void)
{
    int a ,b;
    double a1 =90.77;
    double b1 = 89.99;
    
    printf("Enter  a : ");
    scanf("%d",&a);
    printf("Enter  b : ");
    scanf("%d",&b);
    printf("Before swap a : %d, b : %d \n",a,b);
    //SwapUsingPointer(&a,&b);
   // GenericSwapUsingPointer(&a,&b,sizeof(int));
   // SwapUsingAddition(&a,&b);
    SwapUsingMultiplication(&a,&b);
    printf("after swap a : %d, b : %d\n ",a,b);


    printf("Before swap a : %lf, b : %lf \n",a1,b1);
    GenericSwapUsingPointer(&a1,&b1,sizeof(double));
    printf("after swap a : %lf, b : %lf \n",a1,b1);
    return 0;
}