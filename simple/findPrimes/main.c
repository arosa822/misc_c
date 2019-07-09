/*
 * =====================================================================================
 *
 *       Filename:  main.c
 *
 *    Description:  given an input find the prime numbers
 *
 *        Version:  1.0
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Alex Rosa (), h.rosa822@gmail.com
 *   Organization:  GlassBox LLC.
 *
 * =====================================================================================
 */

# include <stdio.h>

int main(){
    int num1, num2, flag_var, i, j, n;

    //prompt the user to input a range of numbers seperated by a space
    
   printf("'Please enter two number seperated by a spoace"
           "\ninput integer type numbers only   >");

   // store the range in variables using scanf
   
   scanf("%d %d", &num1, &num2);

   // display prime numbers for input range

   printf("\nPrime numbers from %d and %d are:\n", num1, num2);

   

   for (i=num1+1; i<num2; i++){
   flag_var=0;
   n=0;
   for (j=2; j<=i/2; ++j){
        if(i%j == 0){
            flag_var=1;
            n++;
            break;
        }    
   }
   if (flag_var == 0)
       printf("%d\n", i);
   }

   if (n == 0)
       printf("no prime numbers were found");

   return 0;
}


