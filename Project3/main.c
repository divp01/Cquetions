/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int merge(int *arr1)
{
    
    
    
    return 0;
}
int* divide(int *arr,int len)
{  int arr1; int arr2;
    
   int mid = len/2; //3
   
    
    
        
        for(int i=0;i<mid;i++)
        {arr1[i] = arr[i];} //4,7,2 - 4 & 7,2
        
        for(int i=0;i<(len-mid);i++) 
        {arr2[i] = arr[i+mid] ;} //5,9,0
    
    
    
    
    int address[] = {arr1,arr2,mid,len-mid}; // 
    
    return &address;
}

void call(int *array,int len)
{   int * address ;
    
    if(len>1){
          *address = divide(&array,len);
           call(*address[0],*address[2]);
           call(*address[1],*address[3]);
    }
    else{
        printf("all sorted");
    }
    
 
        
}

int main()
{   int arr[]={4,7,2,5,9,0}; //(0,1,2,3,4,5)
    int len = sizeof(arr)/sizeof(arr[0]) // 6
    call(&arr,len);
    
    

    return 0;
}