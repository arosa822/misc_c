#include<stdio.h>

void foo(int *ptr)
{
    *ptr = 6; 

}

void printArray(int *array, int length)
{
    //check to see if user passed in a null pointer
    if (!array)
        return;

    for (int index=0; index < length; ++index)
        printf("value = %d\n", array[index]);
}


int main()
{
   int array[6] = {6,5,4,3,2,1};
   printArray(array,6); 
          
}
