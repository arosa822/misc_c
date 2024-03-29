/*
 * =====================================================================================
 *
 *       Filename:  main.c
 *
 *    Description:  sort an array in ascending order
 *
 *        Version:  1.0
 *        Created:  07/09/2019 14:24:20
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Alex Rosa (), h.rosa822@gmail.com
 *   Organization:  GlassBox LLC.
 *
 * =====================================================================================
 */


#include <stdio.h>

void sort_numbers_ascending(int*, int);

int main(){
    int i, count, number[20];

    printf("How many numbers? :");
    scanf("%d", &count);
    printf("\nEnter the numbers one by one:");

    for (i = 0; i < count; ++i)
        scanf("%d", &number[i]);

    sort_numbers_ascending(number, count);

    return 0;

}

void sort_numbers_ascending(int number[], int count){
    int temp, i, j, k;
    for (j=0; j < count; ++j){
        for (k = j + 1; k < count; ++k){
            if (number[j] > number[k]){
                temp = number[j];
                number[j] = number[k];
                number[k] = temp;
            }

        }
    }

    printf("Numbers in ascending order:\n");
    for (i=0; i < count; ++i)
        printf("%d\n",number[i]);
}
