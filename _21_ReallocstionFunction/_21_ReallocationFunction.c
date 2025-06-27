#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void* UniversalReAlloc(void* ptrPrevious, int previousSize, int newSize);
int main(void)
{  int previousSize = 3;
    int *ptrPrevious = (int *)malloc(previousSize*(sizeof(int)));
    ptrPrevious[0] = 1;
    ptrPrevious[1] = 2; 
    ptrPrevious[2] = 3;
    int newSize = 5;
    int* newptr = (int*)UniversalReAlloc((void*)ptrPrevious,previousSize*sizeof(*ptrPrevious),newSize*sizeof(*ptrPrevious));
    newptr[3] = 4;
    newptr[4] = 5;
    for(int i=0;i<newSize;i++)
        {printf("%d",newptr[i]);}
    return 0;
}

void* UniversalReAlloc(void* ptrPrevious,int previousSize, int newSize)
{
    char * newPtr = (char*)malloc(newSize * sizeof(char));
    if(!newPtr)
       {
        printf("out of space");
        return NULL;
       }

    // for(int i =0;i<newSize;i++)
    // {
    //     newPtr[i] = ((char*)ptrPrevious)[i];
    // }
    memcpy(newPtr, ptrPrevious, previousSize);

    free(ptrPrevious);
    return ((void*)newPtr);


}