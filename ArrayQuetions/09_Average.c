#include<stdio.h>
float average(int*arr,int size)
{
    if(size==1)
        return arr[size-1];
    else
       return (arr[size-1] + ((average(arr,size-1))*(size-1)))/size;
      
    
}
float average_M2(int*arr,int size,int deno)
{
    if(size==1)
        return arr[size-1];
    
    float sum = arr[size-1] + (average_M2(arr,size-1,deno));

    if(size == deno)
        return sum/deno;
    else 
        return sum;
      
    
}
float average_M3(int*arr,int size,int deno)
{
    if(size<1)
        return 0;
    
    float sum = arr[size-1] + (average_M2(arr,size-1,deno));

    if(size == deno)
        return sum/deno;
    else 
        return sum;
      
    
}

int main(void)
{ 
    int arr[] ={1,3,5,7};
    printf("average = %f\n",average(arr,4));
    printf("average = %f\n",average_M2(arr,4,4));
    return 0;
}