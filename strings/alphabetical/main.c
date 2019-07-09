/*
 * =====================================================================================
 *
 *       Filename:  main.c
 *
 *    Description:  sort a list of strings in alphabetical order
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

#include<stdio.h>
#include<string.h>

int main(){
    int i, j, count;
    char str[25][25],temp[25];

    puts("How many strings are you going to enter? ");
    scanf("%d", &count);

    puts("Enter string one by one: ");

    for(i=0;i<=count;i++)
        gets(str[i]);
    for (i=0; i<=count; i++)
        for (j=i+1; j<=count; j++){
            if(strcmp(str[i],str[j])>0){
                strcpy(temp,str[i]);
                strcpy(str[i],str[j]);
                strcpy(str[j],temp);
            }
        }
    printf("Order of Sorted Strings:");
    for(i=0; i<=count; i++)
        puts(str[i]);

    return 0;
          
}


