//{1,3,5,3,1,4} - print frequency of each elemnt like - 1-2, 3-2,5-1,4-1;
#include<stdio.h>
void FrequencyOfEach(int * arr, int size)
{ int flag;
  int count;
    for(int i=0;i<size;i++)
    {  flag =0;
       count =1;
        for(int j=0;j<i;j++)
        {
            if(arr[j]==arr[i])
            {
                flag =1;
                break;
            }
      
        }
        if(flag != 1)
        {
            for(int k=i+1;k<size;k++)
            {
                if(arr[i]==arr[k])
                    count++;
            }
            printf("arr[%d] = %d has frequency of %d\n",i,arr[i],count);
        }

    }
}
int main(void)
{   int arr[] ={1,3,5,3,1,4};
    FrequencyOfEach(arr,6);
    return 0;
}