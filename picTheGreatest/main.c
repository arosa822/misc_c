/*
 * =====================================================================================
 *
 *       Filename:  main.c
 *
 *    Description:  this program prompts the users for 3 numbers and compares/
 *    displays the greatest value number as an output
 *
 *        Version:  1.0
 *        Created:  07/01/2019 17:08:06
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
    int num1, num2, num3;

    //ask user to input any three integer numbers
    printf("\nEnter value of num1, num2, and num3:");

    //Store input values in variables for comparison
    scanf("%d %d %d", &num1, &num2, &num3);

    if((num1>num2) && (num1>num3))
        printf("\n %d is the greatest", num1);
    else if((num2>num1 && num2>num3))
        printf("\n %d is the greatest", num2);
    else
        printf("\n %d is the greatest", num3);

    return 0;
        
 }
