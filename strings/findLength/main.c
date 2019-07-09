/*
 * =====================================================================================
 *
 *       Filename:  main.c
 *
 *    Description:  Find the length of a string without using strlen()
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

#include<stdio.h>

int main(){
    char str[100], i;
    printf("Enter a string:\n");
    scanf("%s",str);

    for(i=0;str[i]!='\0'; i++)
        ;
        printf("\nLendth of input string is: %d",i);
    return 0;
}
