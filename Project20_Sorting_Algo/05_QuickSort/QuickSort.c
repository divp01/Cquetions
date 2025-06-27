#include<stdio.h>
#include<stdlib.h>
int FindPivotIndex(int* arr,int start,int end)
{
    int pivot= arr[end];
    int i=0;
    for(int j=start;j<=end;j++)
    {
    if(pivot >= arr[j])
        i++;
    }
    return start+i;
}
void QuickSort(int* arr,int start,int end)
{   
    int pivotIndex = FindPivotIndex(arr,start,end);
    if(start == end)
        return;
     
    QuickSort(arr,start,pivotIndex-1);
    QuickSort(arr,start,pivotIndex+1);
    
    int* newArray = (int*)malloc((end-start+1)*sizeof(int)); //dynamic
    for(int i=start;i<=end;i++)
    {
        if(arr[pivotIndex] >= arr[i])
        {
            newArray[i]=arr[i];
        }
        else
         newArray[end-i]=arr[i];
    }
     for(int i=start;i<=end;i++)
    {
        arr[i]= newArray[i];
    }
   
    
  

}

void printArray(int* arr, int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
int main(void)
{
    int arr[] = {12, 11, 13, 5, 6, 7};
    int arrSize = sizeof(arr) / sizeof(arr[0]);

    printf("Original array:\n");
    printArray(arr, arrSize);

    QuickSort(arr,0,5);

    printf("Sorted array:\n");
   printArray(arr, arrSize);
    return 0;
}