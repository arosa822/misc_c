/*
 * =====================================================================================
 *
 *       Filename:  main.c
 *
 *    Description:  find the sum of an array using pointers
 *
 *        Version:  1.0
 *        Created:  07/09/2019 21:31:07
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Alex Rosa (), h.rosa822@gmail.com
 *   Organization:  GlassBox LLC.
 *
 * =====================================================================================
 */

#include <stdio.h>

int main(){
    int array[5];
    int i, sum = 0;
    int *ptr;

    printf("\n Enter array elements (5 element values):");
    for (i=0; i<5;i++)
        scanf("%d", &array[i]);

    /* array is equal to base address
     * array = &array[0] */
    ptr = array;

    for(i=0;i<5;i++){
        //* ptr referes to the value at address */
        sum = sum + *ptr;

        ptr++;

    }

    printf("\nThe sum is: %d", sum);
}
