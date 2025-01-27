#include<stdio.h>
int maxAdjcentSum_Iterative(int *arr, int size)
{
    int sum =0,currentSum;
    for(int i=1;i<size;i++)
    {
        currentSum = arr[i-1]+arr[i];
        if(currentSum > sum)
            sum = currentSum;
        
    }
    return sum;
}
int maxAdjcentSum_Recursive(int *arr, int size)
{
    if(size<=1)
        return 0;
    int sum = maxAdjcentSum_Recursive(arr,size-1);
    int currentSum =arr[size-1]+arr[size-2];
    if(currentSum > sum)
        return currentSum;
    else
        return sum;
    
    
}
int maxAdjcentSum_Recursive_M4(int *arr, int size)
{
    if(size==2)
        return arr[size-1]+arr[size-2];
    int sum = maxAdjcentSum_Recursive_M4(arr,size-1);
    int currentSum =arr[size-1]+arr[size-2];
    if(currentSum > sum)
        return currentSum;
    else
        return sum;
    
    
}
void maxAdjcentSum_Recursive_M2(int *arr, int size,int* sum)
{
    if(size<=1)
        return;
    else{
    int currentSum =arr[size-1]+arr[size-2];
    if(currentSum > *sum)
       *sum=currentSum;
       
   
    maxAdjcentSum_Recursive_M2(arr,size-1,sum);
    
    }
}
int maxAdjcentSum_Recursive_M3(int *arr, int size)
{
    if(size==2)
        return arr[0]+arr[1];
    else{

    int sum = maxAdjcentSum_Recursive_M3(arr+1,size-1);
    int currentSum =arr[0]+arr[1];
    if(currentSum > sum)
       return currentSum;
    else
        return sum;
       
    
    }
}
int main(void)
{   int arr[]={1,2,3,5,7};
int sum=0;
    printf(" Max sum = %d \n",maxAdjcentSum_Iterative(arr,5));
     printf(" Max sum = %d \n",maxAdjcentSum_Recursive(arr,5));
     maxAdjcentSum_Recursive_M2(arr,5,&sum);
     printf(" Max sum = %d \n",sum);
      printf(" Max sum = %d \n",maxAdjcentSum_Recursive_M3(arr,5));
       printf(" Max sum = %d \n",maxAdjcentSum_Recursive_M4(arr,5));
    return 0;
}