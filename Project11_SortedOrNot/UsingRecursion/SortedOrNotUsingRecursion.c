#include<stdio.h>
int sortedOrNot(int *arr,int size)
{   
    size--;
    if(size == 0)
       { printf(" till last \n");
       return 1;}
   

    if(*arr < *(arr+1))
      sortedOrNot(arr++,size-1);
    else
        return 0;
}
int main(void)
{
    int arr[]= {1,5,3,9,10};
    
    int Size = sizeof(arr)/sizeof(arr[0]);
    int x = sortedOrNot(arr,5);
    

    if(x ==1)
        printf("really sorted");
    else
        printf("not sorted");
        
    return 0;
        
}