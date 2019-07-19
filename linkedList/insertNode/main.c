/*
 * =====================================================================================
 *
 *       Filename:  main.c
 *
 *    Description:  inserting a node into a linked list
 *
 *        Version:  1.0
 *        Created:  07/18/2019 22:45:39
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

/* Given a refeerence to the head of a list and an int, insert a new node at
 * the front of the list */
void push(struct Node**, int);

/*  given Node (prev_node), insert a new node after the given pre_node */
void insertAfter(struct Node*, int);

/* given a reference (pointer to pointer) to the head
 * of a list and an int, append a new node at the end  */
void append(struct Node**, int);

/* traverse and print all nodes in a linked list */
void printList(struct Node*);

// Driver program to test above functions
int main()
{
    /* start with an empty list */
    struct Node* head = NULL;

    /* Insert 6, so linked list becomes 6->NULL */ 
    append(&head, 6);

    /*  Insert 7 at begining. so linked list becomed 7->6 */
    push(&head,7);

    /* Insert 1 at the begining. 1 -> 7 -> 6 */
    push(&head,1);

    /* append  */

    printList(head);
    


    return 0; 
}


/* 
 * Given a reference (pointer to pointer) to the head of a 1ist
 * and an int, inserta a new node on the front of the list
*/
void push(struct Node** head_ref, int new_data)
{
    /*  allocate node  */
    struct Node* new_node = (struct Node*) malloc(sizeof(struct Node));

    /* insert the data  */
    new_node->data = new_data;

    /*  make next of new node as head  */
    new_node->next =(*head_ref);

    /* move the head to point to the new node */
    (*head_ref) = new_node;

}


/* 
 * Given a node pre_node, insert a new node after the given prev_node
*/
void insertAfter(struct Node* prev_node, int new_data)
{
    /* check if the given prev_node is NULL  */
    if(prev_node == NULL)
    {
        printf("the given previouse node cannot be NULL");
        return;
    }

    /*  allocate new node */
    struct Node* new_node = (struct Node*) malloc(sizeof(struct Node));

    /* put in the data */
    new_node->data = new_data;

    /* make next of new node as next of prev_node */
    new_node->next = prev_node->next;

    /* move the next of prev_node as new_node */
    prev_node->next = new_node;

}

/* given a reference (pointer to pointer) to the head
 * of a list and an int, append a new node at the end  */
void append(struct Node** head_ref, int new_data)
{
    /* allocat new node */
    struct Node* new_node = (struct Node*) malloc(sizeof(struct Node));

    /* this will be usefull in the last step */
    struct Node *last = *head_ref;

    /* store the data */
    new_node->data = new_data;
    /* since this new node is going to be last, assign NULL to next */
    new_node->next = NULL;

    /*  if the link list is empty, then make a new node */
    if (*head_ref == NULL)
    {
        *head_ref = new_node;
        return;
    }

    /* else traverse till the last node */
    while (last->next != NULL)
        last = last->next;

    /* change the next of last node  */
    last->next = new_node;
    return; 

}


/*  helper function to print all nodes in the linked list */
void printList(struct Node *n)
{
    while(n->next != NULL){
        printf(" %d ", n->data);
        n = n->next;
    }
    /* print the last element (next = NULL */
    printf("%d\n",n->data);
}










