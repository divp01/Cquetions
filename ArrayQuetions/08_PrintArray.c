#include<stdio.h>
void PrintArray_LtoR_Itterative(int* arr, int size)
{
 for(int i=0;i<size;i++)
 {
    printf("%d ",arr[i]);
 }
 printf("\n");
}
void PrintArray_RtoL_Itterative(int* arr, int size)
{
  for(int i=size-1;i>=0;i--)
 {
    printf("%d ",arr[i]);
 }
 printf("\n");
}
void PrintArray_LtoR_Recursive(int* arr, int size)
{
    if(size<1)
       { printf("\n");
       return;} 
    printf("%d ",arr[0]);
    PrintArray_LtoR_Recursive(arr+1,size-1);

}
void PrintArray_LtoR_Recursive_M2(int* arr, int size)
{
    if(size<=1)
       {printf("%d ",arr[0]);
        printf("\n");
        return;} 
    printf("%d ",arr[0]);
    PrintArray_LtoR_Recursive(arr+1,size-1);

}
void PrintArray_RtoL_Recursive(int* arr, int size)
{
    if(size<1)
       { printf("\n");
       return;} 
    printf("%d ",arr[size-1]);
    PrintArray_RtoL_Recursive(arr,size-1);

}
void PrintArray_RtoL_Recursive_M2(int* arr, int size)
{
   if(size<=1)
       {printf("%d ",arr[size-1]);
        printf("\n");
        return;} 
    printf("%d ",arr[size-1]);
    PrintArray_RtoL_Recursive(arr,size-1);

}
int main(void)
{   int arr[] ={1,3,4,5,6};
    PrintArray_LtoR_Itterative(arr,5);
    PrintArray_RtoL_Itterative(arr,5);
    PrintArray_LtoR_Recursive(arr,5);
    PrintArray_LtoR_Recursive_M2(arr,5);
    PrintArray_RtoL_Recursive(arr,5);
    PrintArray_RtoL_Recursive_M2(arr,5);
    return 0;
}