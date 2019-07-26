/*
 * =====================================================================================
 *
 *       Filename:  main.c
 *
 *    Description:  practice
 *
 *        Version:  1.0
 *        Created:  07/24/2019 21:48:25
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Alex Rosa (), h.rosa822@gmail.com
 *   Organization:  GlassBox LLC.
 *
 * =====================================================================================
 */

#include<stdio.h>

/*  copy input to output: 1st version */

int main()
{
    int c;
    c = getchar();
    while (c != EOF) {
        putchar(c);
        c = getchar();
    }

    return 0;
}


