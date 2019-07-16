/*
 * =====================================================================================
 *
 *       Filename:  main.c
 *
 *    Description:  swap numbers using pointers
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

void swap(int *x, int *y){
    int t;
    t = *x;
    *x = *y;
    *y = t; 

}

int main(){
    int num1, num2;

    printf("Enter value of number 1: ");
    scanf("%d",&num1);

    printf("Enter a value for number 2: ");
    scanf("%d", &num2);

    swap(&num1, &num2);

    printf("\nnum1 = %d\nnum2 = %d",num1, num2);

    return 0;
}
