/*
 * =====================================================================================
 *
 *       Filename:  main.c
 *
 *    Description:  simple illustration of pointers
 *
 *        Version:  1.0
 *        Created:  07/01/2019 19:43:17
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Alex Rosa (), h.rosa822@gmail.com
 *   Organization:  GlassBox LLC.
 *
 * =====================================================================================
 */

#include<stdio.h>

void show(){
    int var = 20, *ptr;
    ptr = &var;
    printf("value at ptr= %p:",ptr);
    printf("\nvalue at var= %d:",var);
    printf("\nvalue at *ptr = %d:",*ptr);
   
}

int main(){
    show();
    return 0;
}
