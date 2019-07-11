/*
 * =====================================================================================
 *
 *       Filename:  main.c
 *
 *    Description:  Insert Sort Implimentation 
 *
 *        Version:  1.0
 *        Created:  07/10/2019 10:28:44
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Alex Rosa (), h.rosa822@gmail.com
 *   Organization:  GlassBox LLC.
 *
 * =====================================================================================
 */

/* 
 *  Insertion sort algorithm picks elements one by one and places it into the
 *  right position by creating a new list
 *
 *  example:
 *  Input element {89,17,8,12,0}
 *
 *  step one
 *  new list:{89}
 *  input list {17,8,12,0}
 *
 *  step two
 *  new list: {17,89}
 *  input list: {8,12,0}
 *
 *  .. you get the picture.. 
 *  */

#include<stdio.h>

int main(){

    int i, j, count, temp, number[25];

    printf("How many numbers? : ");
    scanf("%d",&count);

    printf("Enter %d elements\n", count);

    // store the input numbers in the array
    for(i=0; i<count; i++) scanf("%d", &number[i]);
    
    //impliment sorting algorithm
    for(i=1;i<count;i++){
        temp=number[i];
        j=i-1;
        while((temp<number[j])&&(j>=0)){
            number[j+1] = number[j];
            j=j-1;
        }
        number[j+1]=temp;

    }

    printf("Order of sorted elements: ");
    for(i=0; i<count; i++) printf(" %d",number[i]);

    return 0; 

}
