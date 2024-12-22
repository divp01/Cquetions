#include<stdio.h>
typedef struct{
    int min;
    int max;
}MinMax;
MinMax MinMaxElemnt(int* arr,int size)
{ 
  MinMax data;
  data.max = arr[0];
  data.min = arr[0];
  for(int i=1;i<size;i++)
  {
    if(arr[i]>data.max)
        data.max = arr[i];
    if(arr[i]<data.min)
        data.min= arr[i];
   
    
  }
return data;

}
int main(void)
{
   int arr[] ={2,5,1};
   int size = sizeof(arr)/sizeof(arr[1]);
   MinMax data;
   data = MinMaxElemnt(arr,size);
   printf("Max : %d ,min : %d ",data.max,data.min);
   return 0;

}