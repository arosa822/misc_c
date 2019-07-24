/*
 * =====================================================================================
 *
 *       Filename:  main.c
 *
 *    Description:  example for dynamically sized arrays
 *
 *        Version:  1.0
 *        Created:  07/23/2019 21:31:04
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Alex Rosa (), h.rosa822@gmail.com
 *   Organization:  GlassBox LLC.
 *
 * =====================================================================================
 */

#include<stdio.h>
#include<stdlib.h>
#define INITIAL_CAPACITY 2

void push(int *arr, int index, int value, int *size, int *capacity)
{
    if(*size > *capacity){
        printf("increasing the size of the array");
        realloc(arr, sizeof(arr) * 2);
        *capacity = sizeof(arr) * 2;
    }

    arr[index] = value;
    *size = *size + 1;
}

int main()
{
    int size = 0;
    int capacity = INITIAL_CAPACITY;
    int *arr = malloc(INITIAL_CAPACITY*sizeof(int));

    push(arr,0,1, &size, &capacity);
    push(arr,1,1, &size, &capacity);
    push(arr,2,3, &size, &capacity);
    push(arr,3,5, &size, &capacity);
    

    return 0;
}
