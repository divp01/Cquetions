//{1,2,4,8,10} - return 1, referenceVariable = 1 , Really Sorted Array
//{1,2,2,2,10} - return 1, referenceVariable = 0 , Sorted Array
//{1,2,9,2,10} - return 0, referenceVariable = 0 , Not Sorted Array
//Taking referenceVariable as "YorN"
//Using Iterative Method

#include<stdio.h>
#include<stdbool.h>
bool SortedOrNot(int *arr,int size,int * YorN)
{
    *YorN=1;
    for(int i=1;i<size;i++)
    {
        if(arr[i-1]<=arr[i])
            {
            if(arr[i-1] == arr[i])
                *YorN = 0;
            }
        else
            {*YorN =0;
             return 0;
            }

    }
    return 1;
}



int main(void)
{
int arr[]= {1,2,2,2,10};
int YorN;
int size = sizeof(arr)/sizeof(arr[0]);
bool x =SortedOrNot(arr,size,&YorN);
printf("x= %d & YorN = %d",x,YorN);

if(x==1 && YorN ==1)
    printf("really sorted");
else if (x==1 && YorN ==0)
    printf("sorted");
else
    printf("not sorted");
    
return 0;
}