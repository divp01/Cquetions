//[1,-2,2] return 1 as adjcent elemnt have opposite sign
//[1,-1,2,-1,3,5] will return 0 , because 3,5 have same sign

//logic
//-ve * +ve =-ve 
//-ve * -ve = +ve and +ve*+ve = +ve

#include<stdio.h>
int OppositeSignCheck_Itterative(int * arr, int size)
{ 
    for(int i=1;i<size;i++)
    {
        if(arr[i-1] * arr[i] >= 0)
            return 0;

    }
    return 1;

}
int OppositeSignCheck_Recursive(int * arr, int size)
{ 
    if(size<=1)
        return 1;
    else if(arr[size-1] * arr[size-2] >= 0)
        return 0;
    else
        return OppositeSignCheck_Recursive(arr,size-1);

}
int OppositeSignCheck_Recursive_2Method(int * arr, int size)
{ 
    if(size<=1)
        return 1;
    int result = OppositeSignCheck_Recursive_2Method(arr,size-1);
    if( result== 0 ||  arr[size-2]*arr[size-1]>=0)
        return 0;
    else 
        return 1;

}
int main(void)
{  
    int arr[] ={1,-2,2,-3,4};
    printf("output is %d\n",OppositeSignCheck_Itterative(arr,5));
    printf("output is %d\n",OppositeSignCheck_Recursive(arr,5));
    printf("output is %d\n",OppositeSignCheck_Recursive_2Method(arr,5));
    return 0;
}
