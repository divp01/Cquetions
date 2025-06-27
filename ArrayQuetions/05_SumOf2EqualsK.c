// input array = {1,3,5,7,10} and k like 10
// output/return 1 if sum of any 2 elemnt = k =10, here 3+7 =10 therefore return 1, else 0
#include<stdio.h>
#include<stdlib.h>
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
            {   printf("%d , %d\n",i,j);
                return 1;}
        else if(sum>k)
            j--;
        else
            i++;
    }

    return 0;
}
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
//LeetCode Problem 2Sum II -Medium
int* twoSum(int* numbers, int numbersSize, int target, int* returnSize) {
    int i=0,j=numbersSize-1;
    int sum =0;
     *returnSize=2;
    int * ptr = (int *)malloc(2*sizeof(int));
    
    while(i<j)
    {
        sum=numbers[i]+numbers[j];
        if(sum==target)
        { ptr[0]=i;
        ptr[1] =j;
        printf("%d , %d\n",i,j);
        return ptr;
        }
        else if(sum>target)
            j--;        
        else
            i++;
    }
    
    *returnSize=0;
    return NULL;

}
int main(void)
{  int arr[]={2,7,11,15};
int returnSize;
  // int YorN = SumOf2Equals_K_Optimized(arr,6,10);
  // printf("present or not : %d",YorN);
   int* YorN = twoSum(arr,4,9,&returnSize);
   printf("present or not : %d,%d",YorN[0],YorN[1]);
    return 0;
}
