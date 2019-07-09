/*
 * =====================================================================================
 *
 *       Filename:  main.c
 *
 *    Description:  example on how to convert strings from upper to lower, and
 *    lower to upper
 *
 *        Version:  1.0
 *        Created:  
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



int toLower(){
    int i;
    char str[25];
    // prompt the user for input
    printf("Please enter a string (upper-case): ");
    scanf("%s",str);
    for(i=0;i<=strlen(str); i++){
        printf("%c:%d\n",str[i],str[i]);
        if(str[i]>=65&&str[i]<90)
            str[i] = str[i]+32;
    }

    printf("new string = %s", str);
    return 0;
}

int toUpper(){
    int i;
    char str[25];
    // prompt the user for input
    printf("Please enter a string (lower-case): ");
    scanf("%s",str);
    for(i = 0; i <= strlen(str); i++){
        printf("%c:%d\n",str[i],str[i]);
        if(str[i]>=97 && str[i] < 122)
            str[i] = str[i] - 32;
    }

    printf("new string = %s",str);
    return 0;
}


int main(){
    //toLower();
    toUpper();

}
