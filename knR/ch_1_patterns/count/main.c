/*
 * =====================================================================================
 *
 *       Filename:  main.c
 *
 *    Description:  1.5.2 character counting
 *
 *        Version:  1.0
 *        Created:  07/25/2019 
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Alex Rosa (), h.rosa822@gmail.com
 *   Organization:  GlassBox LLC.
 *
 * =====================================================================================
 */
#include<stdio.h>

/*  count characters in input  */
int main()
{
    long nc;
    nc = 0;
    while(getchar() != EOF)
        ++nc;
    printf("%ld\n",nc);

    return 0;
}

