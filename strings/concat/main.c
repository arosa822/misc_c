/*
 * =====================================================================================
 *
 *       Filename:  main.c
 *
 *    Description:  concat strings without using strcat
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

int main(){

    char str1[50],str2[50]; 
    int i,j; 
    printf("\nEnter 1st string: ");
    scanf("\n%s",str1);
    printf("\nEnter 2nd string: "); 
    scanf("\n%s",str2);

    //start a loop to count the length of string1
    for(i=0;str1[i]!='\0';++i);

    // append string2 at the end of str2
    for(j=0; str2[j]!='\0'; ++i, ++j){
        str1[i] = str2[j];
    }
    str1[i] = '\0';

    printf("\nConcatenated string is:\n   %s\n",str1);

    return 0;
}


