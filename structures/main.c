/*
 * =====================================================================================
 *
 *       Filename:  main.c
 *
 *    Description:  accessing structure members using pointer
 *
 *        Version:  1.0
 *        Created:  07/16/2019 
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Alex Rosa (), h.rosa822@gmail.com
 *   Organization:  GlassBox LLC.
 *
 * =====================================================================================
 */

#include<stdio.h>

struct person
{
    int age;
    float weight;
};

int main()
{
    struct person *personPtr, person1;
    /* assign the address of person1 to personPtr */
    personPtr = &person1;

    printf("Enter age:");
    scanf("%d", &personPtr->age);

    printf("Enter weight:");
    scanf("%f",&personPtr->weight);

    /* different methods to access structure */
    printf("Displaying:\n");
    printf("Age: %d\n",person1.age);
    printf("Weight: %f\n",person1.weight);

    printf("Displaying:\n");
    printf("Age: %d\n",personPtr->age);
    printf("Weight: %f\n",personPtr-> weight);





    return 0; 
}
