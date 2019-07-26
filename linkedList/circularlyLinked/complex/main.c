/*
 * =====================================================================================
 *
 *       Filename:  main.c
 *
 *    Description:  complex example for circularly linked list
 *
 *        Version:  1.0
 *        Created:  07/26/2019 13:57:04
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Alex Rosa (), h.rosa822@gmail.com
 *   Organization:  GlassBox LLC.
 *
 * =====================================================================================
 */

#include <stdio.h>
#include <stdlib.h>

struct node
{
    struct node *next;
    struct node *prev;
    int val;
};

typedef struct node n; 

n* create_node(int);
void add_node();
void insert_at_first();
void insert_at_end();
void insert_at_position();
void delete_node_position();
void sort_list();
void update();
void search();
void display_from_beg();
void display_in_rev();

/*  declarations  */
n *new, *ptr, *prev;
/*  initialize the first node with next and prev pointing to NULL */
/*  use this to keep track of nodes as we add them */
n *first = NULL, *last = NULL;
int number = 0; 

int main()
{
    int ch;

    printf("\n linked list\n");
    printf("1.insert at beginning \n"
            "2.insert at end\n"
            "3.insert at position\n"
            "4.sort linked list\n" 
            "5.delete node at position\n"
            "6.updatenodevalue\n"
            "7.search element \n"
            "8.displaylist from beginning\n"
            "9.display list from end\n"
            "10.exit ");
    while(1)
    {
        printf("\n enter your choice:");
        scanf("%d", &ch);
        switch(ch)
        {
            case 1:
                insert_at_first();
                break;
            case 2:
                insert_at_end();
                break;
            case 3:
                insert_at_position();
                break;
            case 4:
                sort_list();
                break;
            case 5: 
                delete_node_position();
                break;
            case 6:
                update();
                break;
            case 7: 
                search();
                break;
            case 8: 
                display_from_beg();
                break;
            case 9: 
                display_in_rev();
                break;
            case 10:
                exit(0);
            case 11:
                add_node();
                break;
            default: 
                printf("\ninvalid choice");
            
        }
    }
    return 0;
}


/*  allocate memory for node dynamically  */
n* create_node(int info)
{
    number++;
    new = (n *)malloc(sizeof(n));
    new->val = info;
    new->next = NULL;
    new->prev = NULL;
    return new;
}

void add_node()
{
    int info;
    printf("\nEnter a number: ");
    scanf("%d",&info);
    new = create_node(info);

    /*  first case if there is no nodes */
    if(first == last && first == NULL)
    {
        first = last = new;
        first->next = last->next = NULL;
        first->prev = last->prev = NULL;

    }
    /* change pointers and keep track of first and last\ */
    else
    {
        last->next = new;
        new->prev = last;
        last = new;
        last->next = first; 
        first->prev = last;
       
    }

}

/* insert element at the first node   */
void insert_at_first()
{
    int info;
    printf("\nEnter a number"
            "(to be added at the front): ");
    scanf("%d",&info);
    new = create_node(info);

    if(first == last && first == NULL)
    {
        printf("\nlinked list is empty, adding as first node");
        first = last = new;
        first->next = last->next = NULL;
        first->prev = last->prev = NULL;
    }
    else
    {
        new->next = first;
        first->prev = new;
        first = new; 
        first->prev = last;
        last->next = first; 
        printf("\n new node has been added to the begining"); 
    }



}

void insert_at_end()
{

}

void insert_at_position()
{

}

void delete_node_position()
{

}

void sort_list()
{

}

void update()
{

}

void search()
{

}

void display_from_beg()
{

}

void display_in_rev()
{
}

































































