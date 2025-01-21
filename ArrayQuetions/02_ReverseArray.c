#include<stdio.h>
void swap(int* a,int* b)
{
    int temp = *a;
    *a = *b;
    *b = temp;

}
void printArray(int *arr,int size)
{   printf("\n");
    for(int i=0;i<size;i++)
    {
        printf("%d,",arr[i]);
    }
}
void ReverseAraay_Iterative(int* arr,int size)
{
  int mid = (size/2)-1;
  for(int i=0;i<=mid;i++)
  {
    swap(arr+i,arr+size-1-i);
  }
}

void ReverseAraay_Recursive(int* arr,int size)
{
  
  if(size>1)
   {
   swap(arr+0,arr+size-1); // size =4 then 0, 3, (1,1+2-1)
   ReverseAraay_Recursive(arr+1,size-2);//call 1,2
   }
}
int main(void)
{   int arr[] = {1,3,5,6};
    printArray( arr,4);
   // ReverseAraay_Iterative(arr,4);
    ReverseAraay_Recursive(arr,4);
    printArray( arr,4);
    return 0;}

