/*
 * =====================================================================================
 *
 *       Filename:  main.c
 *
 *    Description:  simple program to find the size of an array
 *
 *        Version:  1.0
 *        Created:  07/10/2019 
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Alex Rosa (), h.rosa822@gmail.com
 *   Organization:  GlassBox LLC.
 *
 * =====================================================================================
 */

#include<stdio.h>

int main(){
    double arr[] = {11,22,33,44,55,66};

    int n; 

    n = sizeof(arr) / sizeof(arr[0]);

    printf("Size of the array is : %d\n",n);

    return 0;
}
