#include<stdio.h>

void SelectionSort(int *arr,int size)
{  int temp; //for swapping

 for(int i=0;i<size-1;i++)
 { 
    for(int j=i+1;j<size;j++)
    {
        if(*(arr+i)>*(arr+j))
        {
            temp =*(arr+i);
            *(arr+i) =*(arr+j);
            *(arr+j) =  temp;
        }
    }
 }
 
}


int main(void)
{  int arr[] ={1,8,6,2,10};
    printf("Before Selection Sort:");
    for(int i=0;i<5;i++)
        printf("%d, ",arr[i]);
    SelectionSort(arr,5);
    printf("\n After Selection Sort: ");
    for(int i=0;i<5;i++)
        printf("%d, ",arr[i]);
    return 0;
}