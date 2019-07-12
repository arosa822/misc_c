/*
 * =====================================================================================
 *
 *       Filename:  main.c
 *
 *    Description:  find the largest of 3 numbers using pointers
 *
 *        Version:  1.0
 *        Created:  07/12/2019 
 *         Revision:  none
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
    int *p1, *p2, *p3;


    //get input from user
    printf("Enter 3 numbers: \n");

    scanf("%d", &num1);
    scanf("%d", &num2);
    scanf("%d", &num3);

    p1 = &num1;
    p2 = &num2;
    p3 = &num3;

    if(*p1>*p2){
        if(*p1>*p3){
            printf("%d is the largest",*p1);
        } 
        else {
            printf("%d is the largest", *p3);
        } 
    }
    else {
        if (*p2>*p3) {
            printf("%d is the largest", *p2);
        } 
        else {
            printf("%d is the largest", *p3);
          }
    } 
    return 0; 
}
