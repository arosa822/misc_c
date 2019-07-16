/*
 * =====================================================================================
 *
 *       Filename:  main.c
 *
    *    Description:  C program to print a string character by character
 *
 *        Version:  1.0
 *        Created:  07/15/2019 
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
    char str[100];
    char *p;

    printf("Enter any string: ");
    fgets(str,100,stdin);

    /* Assigning the base address str[0] to pointer
     * p. p = str is same as p = str[0] */

    p=str;

    printf("The input string is: ");
    while (*p!='\0')
        printf("%c", *p++);



    return 0;
}
