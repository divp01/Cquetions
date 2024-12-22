#include<stdio.h>

// command to compile -  gcc main.c -o main
// command to run - ./main

int SumOfArray(int* arr, int size)
{ int sum =0;
 for(int i=0;i<size;i++)
    { sum +=  arr[i];}
 return sum;

}
int main(void)
{   int arr[] ={2,5,10,11};
    int sum = SumOfArray(arr,(sizeof(arr)/sizeof(arr[1])));
    printf("sum of Array is : %d",sum);
    return 0;
}