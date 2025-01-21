// Here will check is array is really sorted or not
// {2,3,4,6,8} -> ReallySorted = 1, return = 1 -> print array is really sorted
// {2,3,3,6,8} -> ReallySorted = 0, return = 1 -> print array is sorted
// {2,9,4,6,8} -> ReallySorted = 0, return = 0 -> print array is not sorted

// There will be both Iterative and Recursive Method.

#include<stdio.h>
int SortedOrNotIterative(int *arr,int size,int *reallysorted)
{   int result =1;
    for(int i=0;i<size-2;i++)
    {
        if(arr[i]>=arr[i+1])
        { 
            *reallysorted = 0;
            if(arr[i]>arr[i+1])
               { result = 0;
                return result;
               }
        }
        
    }
    return result;
}
int SortedOrNotRecursive(int *arr,int size,int *reallysorted,int* result)
{  
       if(size ==1)
            return 1;
       printf("arr[0] = %d & arr[1] = %d, ",arr[0],arr[1]);
        if( *result == 0 || arr[0]>=arr[1])
        { 
          *reallysorted = 0;
            if(*result == 0 || arr[0]>arr[1])
               { *result = 0;
                  return 0; }
            else
               *result = 1;

        }
        

        printf("result = %d\n",*result);

        *result = SortedOrNotRecursive(++arr,size-1,reallysorted,result);
     
    return *result;
}
int SortedOrNotRecursive_2ndWay(int *arr,int size,int *reallysorted)
{     int  result = 1;
       if(size ==1)
            return 1;
      
        result = SortedOrNotRecursive_2ndWay(arr,size-1,reallysorted);
        //printf("arr[size-1] = %d & arr[size-2] = %d, ",arr[size-1],arr[size-2]);
        //printf("*reallysorted= %d\n",*reallysorted);
        if(result == 0)
            return 1;
        else
        { if(arr[size-1]<=arr[size-2])
            {*reallysorted =0;
            if(arr[size-1]< arr[size-2])
              return 0;
            }
        }
    return result;
}
int main(void)
{ 
    int arr[] = {1,3,3,4,8};
    int reallysorted = 1;
    int out=1;
    //int out = SortedOrNotIterative(arr,5,&reallysorted);
    out = SortedOrNotRecursive(arr,5,&reallysorted,&out);
    //out = SortedOrNotRecursive_2ndWay(arr,5,&reallysorted);
    printf("%d is out, %d is variable\n",out,reallysorted);
    if(out != 1)
        printf("not sorted");
    else
    {
        if(reallysorted != 1)
             printf("sorted");
        else
             printf("really sorted");
    }
    return 0;
}