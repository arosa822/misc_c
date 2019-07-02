/*
 * =====================================================================================
 *
 *       Filename:  main.c
 *
 *    Description:  2 methods for implimenting fibonacci sequence
 *
 *        Version:  1.0
 *        Created:  07/01/2019 18:40:41
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Alex Rosa (), h.rosa822@gmail.com
 *   Organization:  GlassBox LLC.
 *
 * =====================================================================================
 */

#include <stdio.h>

int loopMethod(){
    int count, first_term=0, second_term=1, next_term,i;

    //Ask user to input number of terms
    printf("Enter the number of terms:\n");
    scanf("%d",&count);

    printf("First %d terms of Fibonacci series:\n",count);
    for(i = 0 ; i < count ; i++){
        if ( i <= 1 ) 
            next_term = i;
    else {
        next_term = first_term + second_term;
        first_term = second_term;
        second_term = next_term;
    }

    printf("%d\n",next_term);


    }
    return 0; 
}

int recursiveMethod(){

    int fibonacci_series(int);
    int count, c = 0, i;
    printf("Enter the number of terms:\n");
    scanf("%d",&count);
    for (i = 1; i <= count ; i++){
       printf("%d\n", fibonacci_series(c));
       c++;
    }

    return 0;
}

int fibonacci_series(int num){
    if ( num == 0 ) 
        return 0;
    else if ( num == 1)
        return 1;
    else
        return (fibonacci_series(num-1) + fibonacci_series(num-2));
}


int main(){
    recursiveMethod();

    return 0;
}

