#include<stdio.h>
#include<stdbool.h>
//return 1 if found else 0.
bool SearchElement(int * arr, int size, int element)
{
 for(int i=0;i<size;i++)
 {
    if(element == arr[i])
        return 1;
 }
 return 0;
}

int main(void)
{  
  int arr[] = {9,6,3,9,10};
  int size = (sizeof(arr)/sizeof(arr[1]));
  int elemnt = 9;
  int found = SearchElement(arr,size, elemnt);
  if(found == 1)
    printf("elemnt : %d is found in given array", elemnt);
  else
    printf("elemnt : %d is not found in given array", elemnt);

    return 0;
}