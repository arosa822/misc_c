#include <stdio.h>
#include <stdlib.h>
#include "vector.h" 

void vector_init(Vector *vector)
{
    //initialize size and capacity
    vector->size = 0;
    vector->capacity = VECTOR_INITIAL_CAPACITY;

    //allocate memory for vector->data
    vector->data = malloc(sizeof(int) * vector->capacity);
}

void vector_append(Vector *vector, int value)
{
    //make sure space is available
    vector_double_capacity_if_full(vector);

    //append the value and increment vector -> size
    vector->data[vector->size++] = value; 
}

int vector_get(Vector *vector, int index)
{
    //error checking - out of bounds
    if (index >= vector->size || index < 0)
    {
        printf("invalid argument for vector_get(), index is out of range, size = %d",vector->size);
        exit(1);
    }
    return vector->data[index];
}

void vector_set(Vector *vector, int index, int value)
{
    // zero fill the vector up to the desired index
    // ** vector size increments 1 value each time a value is added 
    while (index >= vector->size) 
    {
        vector_append(vector, 0);
    }

    // set the value at the desired index 
    vector->data[index] = value; 
}

void vector_double_capacity_if_full(Vector *vector)
{
    if(vector->size >= vector->capacity)
    {
        vector->capacity *= 2;
        vector->data = realloc(vector->data, sizeof(int) * vector->capacity); 
    }
}

void vector_free(Vector *vector) 
{
    free(vector->data);
}
