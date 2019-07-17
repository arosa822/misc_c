/*
 * =====================================================================================
 *
 *       Filename:  main.c
 *
 *    Description:  first example of a linked list
 *
 *        Version:  1.0
 *        Created:  07/17/2019 
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Alex Rosa (), h.rosa822@gmail.com
 *   Organization:  GlassBox LLC.
 *
 * =====================================================================================
 */

#include<stdio.h>
#include<stdlib.h>

struct Node 
{
    int data;
    struct Node *next;
};

void printList(struct Node *n)
{
    while (n != NULL){
        printf(" %d ", n->data);
        n = n->next;
    }
}

int main()
{
    struct Node* head = NULL;
    struct Node* second = NULL;
    struct Node* third = NULL;
    
    /*  allocate 3 nodes in the heap */ 

    head = (struct Node*)malloc(sizeof(struct Node));
    second = (struct Node*)malloc(sizeof(struct Node));
    third = (struct Node*)malloc(sizeof(struct Node));

    /* 
     * three blocks have been allocated dynamically
     * we have pointers to these three blocks as first second and third
    */
    
    head->data = 1;
    head->next = second;

    second->data = 2;
    second->next = third;
    
    third->data = 3;
    third->next = NULL;

    printList(head);

    return 0;
}

