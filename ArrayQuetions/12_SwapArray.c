#include<stdio.h>
void Swap(int* a, int* b)
{
    int temp =*a;
    *a =*b;
    *b=temp;
}
Void SwapArray(int *arr1, int* arr2, int size)
{
    for(int i=0;i<size;i++)
    {
        Swap(arr1[0],arr2[0]);
        arr1++;
        arr2++;
    }
}
void printArray(int * arr,int size)
{
    for(int i=0;i<size;i++)
    {
        printf("%d ",arr[0]);
        arr++;
        
    }
    printf("\n ");
}
int main(void)
{   int arr1[] = {1,3,5,7};
int arr2[] = {3,6,9,10};
printArray(arr1,4);
printArray(arr2,4);
SwapArray(arr1,arr2,4);
    return 0;
}