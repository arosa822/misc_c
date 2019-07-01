/*
 * this program reverses a string through recursion
 */


#include <stdio.h>
#include <string.h>

void reverse_string(char*, int, int);

int main(){
    // This array holds a string up to 150 chars long
    char string_array[150];
    printf("Enter any string:");
    // get input from user
    scanf("%s", &string_array);

    // calling the user defined function
    reverse_string(string_array, 0, strlen(string_array)-1);
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

    //function calling itself: 
    reverse_string(x, ++start, --end);
    

}
