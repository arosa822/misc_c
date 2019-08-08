#include<stdio.h>
#include "vector.h" 

int main()
{
    //declare and initialize a new vector 
    Vector vector;
    vector_init(&vector);

    // fill it up with 150 arbitrary values
    // this should expand capacity
    int i;
    for(i = 200; i > -50; i--)
    {
        vector_append(&vector, i);
    }

    // set a value at an arbitray index
    // this will expand and zero-fill the vector to fit
    vector_set(&vector, 445, 21558845);

    //print out an arbitray value in the vecto
    printf("\nThis is the value at 27 : %d\n",vector_get(&vector, 27));

    //lets free up space since we are done with the underlying data array
    vector_free(&vector);

    return 0; 
}
