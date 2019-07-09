/*
 * =====================================================================================
 *
 *       Filename:  main.c
 *
 *    Description: reverse a string through recursion
 *
 *        Version:  1.0
 *        Created:  07/09/2019 
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Alex Rosa (), h.rosa822@gmail.com
 *   Organization:  GlassBox LLC.
 *
 * =====================================================================================
 */


#include <stdio.h>
#include <string.h>

void reverse_string(char*, int, int);


int main(){
    char string_array[150];
    //create an array to hold string up to predefined number of characters
    printf("Enter a string: ");
    scanf("%s",string_array);

    // call user defined function
    reverse_string(string_array,0,strlen(string_array)-1);
    printf("\nReversed String is: %s", string_array);

    return 0; 
}


void reverse_string(char *x, int start, int end){
    char ch;
    if (start >= end)
        return;

    ch = *(x+start);
    *(x+start) = *(x+end);
    *(x+end) = ch;

    //call function
    reverse_string(x, ++start,  --end);
}
