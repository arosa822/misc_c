/*
 * =====================================================================================
 *
 *       Filename:  main.c
 *
 *    Description:  Bubble sort algorithm (sinking sort) Compares each pair of
 *    adjacent items and swaps them if they are in the wrong order. 
 *
 *        Version:  1.0
 *        Created:  07/10/2019 
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
    int count, temp, i, j, number[30];

    printf("How many numbers are you going to enter? :");

    scanf("%d",&count);

    printf("\nEnter %d numbers:\n", count);

    for(i = 0; i < count; i++){
        scanf("%d",&number[i]);
    }

    /* Main bubble sort algorithm logic */
    for (i=count-2; i>=0; i--){
        for(j=0; j<=i; j++){
            if(number[j]>number[j+1]){
                temp = number[j];
                number[j]=number[j+1];
                number[j+1]=temp;
            }
        }
    }

    printf("Sorted elements: ");
    for(i=0; i<count; i++){
        printf(" %d",number[i]);
    }

    return 0; 
}
