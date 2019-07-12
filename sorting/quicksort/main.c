/*
 * =====================================================================================
 *
 *       Filename:  main.c
 *
 *    Description:  divide and conquor algorithm
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

void quicksort(int[25], int, int);

void test(char*); 

int main(){
    int i, count, number[25];

    printf("How many elements are you going to enter?");
    scanf("%d",&count);
    printf("Enter the numbers");
    for(i=0;i<count;i++) scanf("%d",&number[i]);

    quicksort(number, 0, count-1);

    printf("Order of sorted elements: ");
    for(i=0;i<count; i++) printf(" %d", number[i]);
    
    return 0; 
}

void quicksort(int number[25], int first, int last){
    int i, j, pivot, temp;

    if(first<last){
        pivot=first;
        i=first;
        j=last;

        while(i<j){
            while(number[i]<=number[pivot]&&i<last) i++;
            while(number[j]>number[pivot]) j--;
            if(i<j){
                temp = number[i];
                number[i]=number[j];
                number[j] = temp;
            }
        }
        temp=number[pivot];
        number[pivot]=number[j];
        number[j]=temp;
        quicksort(number,first,j-1);
        quicksort(number,j+1,last);

    }
}

