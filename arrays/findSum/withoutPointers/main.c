/*
 * =====================================================================================
 *
 *       Filename:  main.c
 *
 *    Description:  find the sum of array elements without using pointers
 *    (hardcoded)
 *
 *        Version:  1.0
 *        Created:  07/09/2019 21:14:16
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Alex Rosa (), h.rosa822@gmail.com
 *   Organization:  GlassBox LLC.
 *
 * =====================================================================================
 */

#include <stdio.h>

int sum_array_elements(int[],int);
int main(){
    int array[] = {0,1,2,3,4,5,6};
    int sum;

    sum = sum_array_elements(array,6);

    printf("\nSum of array elements is: %d", sum);

    return 0; 
}

int sum_array_elements(int arr[], int n){
    if(n<0){
        //base case
        return 0;
    } else{
        // recursive part
      return arr[n] + sum_array_elements(arr,n-1);
    }   
}


