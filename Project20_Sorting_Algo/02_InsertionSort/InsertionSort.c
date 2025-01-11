#include<stdio.h>

void InsertionSort(int *arr,int size)
{  int temp;
   
    for(int i=1;i<size;i++)
    {  temp = *(arr+i); // or *(arr+i)
       for(int j= i-1;j>=0;j--)
       {
        if(temp<*(arr+j))
        {
            *(arr+j+1)=*(arr+j); //right shift
            *(arr+j)=temp;
        }
       }
    }
 
 
}


int main(void)
{  int arr[] ={1,1,6,2,10};
    printf("Before Insertion Sort:");
    for(int i=0;i<5;i++)
        printf("%d, ",arr[i]);
    InsertionSort(arr,5);
    printf("\n After Insertion Sort: ");
    for(int i=0;i<5;i++)
        printf("%d, ",arr[i]);
    return 0;
}