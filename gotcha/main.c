/*
 * =====================================================================================
 *
 *       Filename:  main.c
 *
 *    Description:  weird program to allocate memory - dont use this
 *
 *        Version:  1.0
 *        Created:  07/26/2019 13:24:25
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Alex Rosa (), h.rosa822@gmail.com
 *   Organization:  GlassBox LLC.
 *
 * =====================================================================================
 */

#include<stdio.h>

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    /* wtf?  */
    int arr[n];

    printf("\nSize of array = %lu ", sizeof(arr));
    return 0;
}
