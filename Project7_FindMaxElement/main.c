#include<stdio.h>
int maxElemnt(int* arr,int size)
{ int max = arr[0];
  for(int i=1;i<size;i++)
  {
    if(arr[i]>max)
        max = arr[i];
    return max;
  }


}
int main(void)
{
   int arr[] ={2,5,1};
   int size = sizeof(arr)/sizeof(arr[1]);
   int max = maxElemnt(arr,size);
   printf("Max elemnt of given array is %d",max);
   return 0;

}