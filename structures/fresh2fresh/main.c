/*
 * =====================================================================================
 *
 *       Filename:  main.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  07/18/2019 
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  
 *   Organization: 
 *
 * =====================================================================================
 */

#include<stdio.h>
#include<string.h>

struct student
{
    int id;
    char name[20];
    float percentage;

};

void pstruct(struct student);

int main()
{
    //initialize all variables to null
    struct student record = {0}; 

    pstruct(record);


    record.id=1;
    strcpy(record.name,"Alex");
    record.percentage = 100;

    //create a pointer struct
    pstruct(record);


    //create object pointer
    struct student pointer;
    //declare the pointer
    struct student *ptrstruct;
    //assign the value to the pointer
    ptrstruct = &pointer;

    //define the struct throught the pointer
    ptrstruct->id = 2;
    strcpy(ptrstruct->name,"pointer");
    ptrstruct->percentage = 50;

    pstruct(*ptrstruct);


    return 0;

}

void pstruct(struct student someStruct)
{
    printf("id: %d\nname: %s\npercentage %f\n",\
            someStruct.id, someStruct.name, someStruct.percentage);
    
}
