// return 2nd-small/min element
//{1,3,6,4,2} = return 2
// {1,3,6,4,7} = return 3

#include<stdio.h>
int Smallest_2ndElemnt(int *arr,int size)
{   int min1=arr[0];
int min2;

    for(int i=1;i<size;i++)
    {  
        if(arr[i]<min1)
        {
         min2=min1; //previous small value of min1 into min2 
         min1 = arr[i]; //latest small value
         
        }
        else if(arr[i]<min2)
        {
            min2=arr[i];
        }
    }
    return min2;
}
int main(void)
{   int arr[] = {1,3,6,4,2};
    printf("2nd min value of array: %d",Smallest_2ndElemnt(arr,5));
    return 0;
}