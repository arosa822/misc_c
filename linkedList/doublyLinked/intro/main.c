/*
 * =====================================================================================
 *
 *       Filename:  main.c
 *
 *    Description:  introduction to doubly linked lists
 *
 *        Version:  1.0
 *        Created:  07/23/2019 
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

/*  Node of a doubly linked list */
struct Node {
    int data;
    struct Node* next; 
    struct Node* prev; 
};

/* add a node to the front of the list  */

void push(struct Node** head_ref, int new_data)
{
    /* allocate node  */
    struct Node* new_node = (struct Node*) malloc(sizeof(struct Node));

    /* put the data in */
    new_node->data = new_data;
    /* make the next of the new node as head and the previous as NULL */
    new_node->next = (*head_ref);
    new_node->prev=NULL;

    /* change the prev of head node to new ndoe  */
    if((*head_ref) != NULL)
        (*head_ref)->prev = new_node;

    /* move the head to point to the new node  */
    (*head_ref) = new_node;
}

void insertAfter(struct Node* prev_node, int new_data)
{
    /*  check if the given prev_node is NULL */
    if (prev_node == NULL){
        printf("The given previous node cannot be NULL");
    }

    /*  allocate new node */
    struct Node* new_node = (struct Node*) malloc(sizeof(struct Node));

    /*  throw in the data  */
    new_node->data = new_data;

    /* make the next of the new node as next of the prev node */
    new_node->next = prev_node->next;

    /*  make the previous of the new node as prev node */
    new_node->prev = prev_node;    

    /*  make the next of prev node new_node */
    prev_node->next = new_node;

    /*  change previous of new_node's next  */
    if(new_node->next != NULL)
        new_node->next->prev = new_node;
}

void insertBefore(struct Node** head_ref, struct Node* next_node, int new_data)
{
    /*  1. check if the next_node is NULL or not. IF its NULL return from the
     *  function because any new node can not be added before NULL */
    if(next_node == NULL){
        printf("the given next node cannot be NULL");
    }

    /* 2. allocate memory for the new node, let it be called new_node */
    struct Node* new_node = (struct Node*) malloc(sizeof(struct Node)); 

    /* 3. set new_node-> data = new_data */
    new_node->data = new_data;

    /* 4. set the previous pointer of this new_node as the precious node of the
     * next_node, new_node->prev = next_node->prev */
    new_node->prev = next_node->prev;

    /* 5. set the prev pointer of the next_node as the new_node */
    next_node->prev = new_node;

    /* 6. set the next pointer of the new node ads the next node */
    new_node->next = next_node;

    /* 7. if the previous node of the new_node is not NULL, then set the next
     * pointer of this previous node as new_node, */
    if(new_node->prev != NULL)
        new_node->prev->next = new_node;

    /*  else, if the prev of new_node is NULL, it will be the nmew head node.
     *  so makle (*head_ref) = new_node */
    else
        (*head_ref) = new_node;
}



void append(struct Node** head_ref, int new_data)
{
    /* 1. allocate space */
    struct Node* new_node = (struct Node*)malloc(sizeof(struct Node)); 
    /* keep this for step 5 */
    struct Node* last = *head_ref;

    /* 2. throw in the data */
    new_node->data = new_data;

    /* 3. new node is going to be the last node so last = NULL */
    new_node->next = NULL;

    /*  4. if the linked list is empty, then make the new node as head */
    if( *head_ref == NULL)
    {
        new_node->prev = NULL;
        *head_ref = new_node;
        return;
    }

    /* 5. Else traverse till the last node */
    while (last->next != NULL)
        last = last->next;

    /* 6.  chasnge the next of last node */
    last->next = new_node;

    /* 7. make last node as previous of new node */
    new_node->prev = last;

    return; 
}


void printList(struct Node* node)
{
   struct Node* last;
   printf("\n Traversal in forward direction\n");
   while (node != NULL){
       printf(" %d ", node->data);
       last = node; 
       node = node->next;
   }

   printf("\n Traversal in reverse direction \n");
   while(last != NULL){
       printf(" %d ", last->data);
       last = last->prev;
   }
}

int main()
{
    /* start with the empty list */
    struct Node* head = NULL;  
    push(&head, 7);  
  
    push(&head, 1);  
  
    push(&head, 4);  
  
    // Insert 8, before 1. So linked list becomes 4->8->1->7->NULL  
    insertBefore(&head, head->next, 8);  
  
    printf("Created DLL is: ");  
    printList(head);  
  
    getchar();  
    return 0;  
}  
























































