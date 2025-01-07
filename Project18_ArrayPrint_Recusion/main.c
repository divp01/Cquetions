#include<stdio.h>
void PrintArrayMethod1(int* arr,int index,int size)
{
  if(index==size)
    return;
  printf("%d ",arr[index]); // 1 2 3 4 6
  PrintArrayMethod1(arr,index+1,size);
 // printf("%d ",arr[index]); //6,4,3,2,1
}
void PrintArrayMethod2(int* arr,int index)
{
  if(index==-1)
    return;
  printf("%d ",arr[index]); // 6,4,3,2,1
  PrintArrayMethod2(arr,index-1);
 // printf("%d ",arr[index]); //1 2 3 4 6
}
int main(void)
{
    int arr[]={1,2,3,4,6};
    int size =5;
    PrintArrayMethod1(arr,0,size);
    PrintArrayMethod2(arr,size-1);
    return 0;
}