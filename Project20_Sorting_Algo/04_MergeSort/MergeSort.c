#include<stdio.h>
void merge(int* arr,int start,int mid,int end,int* Array);
void Divide(int * arr,int start, int end,int* Array);
void Divide(int * arr,int start, int end,int* Array)
{    if(start >= end)
        return;
    int mid = (start + end)/2;
   
    Divide(arr,start,mid,Array);
    Divide(arr,mid+1,end,Array);
    merge(arr,start,mid,end,Array);
    
}
void merge(int* arr,int start,int mid,int end,int* Array)
{   int p1,p2;
    p1 =start;
    p2 =mid+1;
    int size = end-start+1;
    //Array[size];
    int i=0;
   while (p1 <= mid && p2 <= end)

    { 
        if(*(arr+p1)<*(arr+p2))
        {
             Array[i]=*(arr+p1);
            i++;
            p1++;
        }
        else{
             Array[i]=*(arr+p2);
            i++;
            p2++;
        }

    }
    while(p1<=mid)
    {
         Array[i]=*(arr+p1);
        i++;
        p1++;

    }
    while(p2<=end)
    {
         Array[i]=*(arr+p2);
        i++;
        p2++;
    }
    for (i = 0; i < size; i++) {
        arr[start + i] =  Array[i];
    }

  
}
void MergeSort(int* arr,int size)
{
    int mid =(size-1)/2;
    int Array[ size];
merge(arr,0,mid,size-1, Array);
}




int main(void)
{  int arr[] ={1,8,6,2,10};
    printf("Before Merge Sort:");
    
    int Array[5];

    for(int i=0;i<5;i++)
        printf("%d, ",arr[i]);
    Divide(arr, 0, 5 - 1, Array);
    printf("\n After Merge Sort: ");
    for(int i=0;i<5;i++)
        printf("%d, ",arr[i]);
    return 0;
}