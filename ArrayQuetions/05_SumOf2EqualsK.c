// input array = {1,3,5,7,10} and k like 10
// output/return 1 if sum of any 2 elemnt = k =10, here 3+7 =10 therefore return 1, else 0
#include<stdio.h>
int SumOf2Equals_K(int* arr, int size,int k)
{
    for(int i=0;i<size;i++)
    {
        for(int j=i+1;j<size;j++)
        {
            if(arr[i]+arr[j]==k)
                return 1;
        }
    }
    return 0;
}
int SumOf2Equals_K_Optimized(int* arr, int size,int k)
{
    int i=0, j=size-1,sum=0;
    while(i<j)
    {   sum=arr[i]+arr[j];
        if(sum==k)
            return 1;
        else if(sum>k)
            j--;
        else
            i++;
    }
    return 0;
}
int main(void)
{  int arr[]={1,3,5,6,6,10};
   int YorN = SumOf2Equals_K_Optimized(arr,6,10);
   printf("present or not : %d",YorN);
    return 0;
}
