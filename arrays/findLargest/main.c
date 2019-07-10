/*
 * =====================================================================================
 *
 *       Filename:  main.c
 *
 *    Description:  Find the largest element of an array
 *
 *        Version:  1.0
 *        Created:  07/09/2019 
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Alex Rosa (), h.rosa822@gmail.com
 *   Organization:  GlassBox LLC.
 *
 * =====================================================================================
 */

#include <stdio.h>

int largest_element(int*, int);

int main(){
    int arr[] = {1,24,25,235,-645,100};
    int n = sizeof(arr)/sizeof(arr[0]);
    printf("Largest element of array is %d", largest_element(arr, n));

    return 0;
}

int largest_element(int arr[], int num){
    int i, max_element;

    //initialize the first array element
    max_element = arr[0];

    for (i = 1; i < num; i++)
        if (arr[i] > max_element)
            max_element = arr[i];

    return max_element; 
}
