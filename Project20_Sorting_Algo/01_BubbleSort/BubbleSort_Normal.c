#include<stdio.h>
void BubbleSort(int *arr,int size)
{
    for(int i=0;i<size-1;i++)
    {
        for(int j=0;j<size-1-i;j++)
        {
            if(*(arr+j)>*(arr+j+1))
            {
                int temp = *(arr+j);
                *(arr+j)=*(arr+j+1);
                *(arr+j+1)= temp;
            }
        }
    }
}
int main(void)
{ 
    int arr[] ={4,7,2,9,1};
    printf("Before Bubble Sort:");
    for(int i=0;i<5;i++)
        printf("%d, ",arr[i]);
    BubbleSort(arr,5);
    printf("\n After Before Bubble Sort:");
    for(int i=0;i<5;i++)
        printf("%d, ",arr[i]);
    return 0;
}