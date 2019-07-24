/*
 * =====================================================================================
 *
 *       Filename:  main.c
 *
 *    Description:  delete a node from a linkked list
 *
 *        Version:  1.0
 *        Created:  07/22/2019 22:37:20
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Alex Rosa (), h.rosa822@gmail.com
 *   Organization:  GlassBox LLC.
 *
 * =====================================================================================
 */

#include <stdio.h>
#include<stdlib.h>

/* create structure for a linked list */
struct Node
{
    int data;
    struct Node *next;
};



/* 
 * Given a reerence (pointer to a pointer) to the head of a list and an int,
 * insert a new node at the front of the list
 */
void push(struct Node **head_ref, int new_data)
{
    struct Node* new_node = (struct Node*) malloc(sizeof(struct Node));
    new_node->data = new_data;
    new_node->next = (*head_ref);
    (*head_ref) = new_node;
}

/*  
 *  Given a reference (pointer to pointer) to the head of a list and a key,
 *  deletes the first occurance of key in linked list
*/
void deleteNode(struct Node **head_ref, int key)
{
    /* Store head node */
    struct Node* temp = *head_ref;
    struct Node *prev;

    if (temp != NULL && temp->data == key)
    {
        /*  change head */
        *head_ref = temp->next;
        /* free old head */
        free(temp);
        return; 

    }
    /* search for the key to be deleted, keep track of the previous node as we
     * need to change 'prev->next */
    while (temp != NULL && temp->data != key)
    {
        prev = temp;
        temp = temp->next;

    }

    /* if key was not present in linked list */
    if (temp==NULL) return;

    /* unlink the node from linked list */
    prev->next = temp->next;

    /* free up memory */
    free(temp); 

}

/* print the contents of linked list starting from the given node */
void printList(struct Node *node)
{
    while (node != NULL)
    {
        printf(" %d ", node->data);
        node = node->next;
    }
}

int main()
{
    struct Node* head = NULL;

    push(&head, 7);
    push(&head, 1);
    push(&head, 3);
    push(&head, 2);

    printf("\ncreated new linked list)");
    printList(head);
    deleteNode(&head,1);
    printf("\n Linked list after Deletion of 1;\n");
    printList(head);

    return 0; 
}










