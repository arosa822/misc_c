/*
 * =====================================================================================
 *
 *       Filename:  factorial.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  07/23/2019 14:36:12
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
    int i, num, j;
    printf("Enter the number: ");
    scanf("%d",&num);

    j = num;
    for(i=1; i<num; i++) 
        j= j*i;

    printf("The factorial of %d is %d\n", num,j);

    return 0;
        
}

