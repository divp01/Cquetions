#include<stdio.h>
int floatSpecial(float* arr, int size)
{ int left = (int)arr[0];
  float right = arr[0] - (int)arr[0];
  
  if(size<=1)
    return 1;

  if((int)arr[0]<(int)arr[1])
  {
    if(((arr[0] - (int)arr[0]))>((arr[1] - (int)arr[1])))
        floatSpecial(arr+1,size-1);
    else
        return 0;
  }
  else
    return 0;

}


int main(void)
{  float arr[] = {1.29,2.21,5.11,7.05};
   printf("ans: %d\n",floatSpecial(arr,4));
    return 0;
}