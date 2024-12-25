//{1,1,7,12,5} - 7+5 = 12 - return 1
//{1,8,7,12,5} - 1+7 = 8 - return 1
//{1,1,7,11,5}  - return  0

#include<stdio.h>
#include<stdbool.h>
bool GoodNeighbor(int *arr,int size)
{
 for(int i=1;i<size-1;i++)
 {
    if(arr[i]==arr[i-1]+arr[i+1])
        return 1;
    
 }
return 0;
}

int main(void)
{
int arr[] ={1,1,7,12,5};
int size = sizeof(arr)/sizeof(arr[0]);
bool x= GoodNeighbor(arr,size);
if(x==1)
    printf("Given Array have Good Neighbor");
else
    printf("Given Array have not Good Neighbor");


return 0;
}