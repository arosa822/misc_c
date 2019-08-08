/*
 * =====================================================================================
 *
 *       Filename:  main.c
 *
 *    Description:  Testing a callback
 *
 *        Version:  1.0
 *        Created:  08/05/2019 16:25:23
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Alex Rosa (), h.rosa822@gmail.com
 *   Organization:  GlassBox LLC.
 *
 * =====================================================================================
 */

#include<stdio.h>

typedef int(*comparer)(int,int);

void test(int num1, int num2,comparer compare)
{
    int r = 0; 
    r = compare(num1,num2);
    printf("\nr = %d",r);
}

int main()
{
    int j = 2, k = 3;

    comparer int_comp = gcompare; 
    test(j,k,gcompare);
}
   





