/*
 * =====================================================================================
 *
 *       Filename:  main.c
 *
 *    Description:  Playing around with pointers
 *
 *        Version:  1.0
 *        Created:  07/16/2019 
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
    int a = 1;

    int *ptr = &a;

    a += 1;
    *ptr += 1;

    printf("%d\n",a);
    printf("%d\n",*ptr);

    return 0; 
}
