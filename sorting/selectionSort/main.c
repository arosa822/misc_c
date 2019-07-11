/*
 * =====================================================================================
 *
 *       Filename:  main.c
 *
 *    Description:  Selection sort algorithm
 *
 *        Version:  1.0
 *        Created:  07/11/2019 
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
    int i, j, count, temp, number[25];

    printf("How many numbers? : ");
    scanf("%d",&count);

    printf("Enter %d numbers: ",count);
    

    for(i=0; i<count; i++) scanf("%d", &number[i]);

    //logic for sorting algorithm
    for (i=0; i<count; i++){
        for(j=i+1;j<count; j++){
            if(number[i]>number[j]){
                temp = number[i];
                number[i] = number[j];
                number[j] = temp;

            }
        }
    }

    printf("sorted elements: \n");
    for(i=0; i<count; i++) printf("%d ",number[i]);
}
