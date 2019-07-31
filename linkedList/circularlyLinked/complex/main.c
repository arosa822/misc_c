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
    printf("\nEnter a number :");
    scanf("%d",&info);
    new = create_node(info);

    /* check to see if there is a head  */
    if(first == last && first == NULL)
    {
        first = last = new;
        first->next = last->next = NULL;
        first->prev = last->prev = NULL;
    }
    else
    {
        first->prev = new;
        new->next = first;
        new->prev = last;
        first = new; 
        last->next = first;
        printf("\nnode set to the front!");
    }
}

void insert_at_end()
{
    int info;
    printf("\nEnter a number");
    scanf("%d",&info);
    new = create_node(info);

    if(first == last && first == NULL)
    {
        first = last = new;
        first->next = last->next = NULL;
        first->prev = last->prev = NULL;
    }
    else
    {
        last->next = new;
        new->prev = last;
        last = new;
        first->prev = last;
        last->prev = first;
        printf("\n node was inserted at the end of the list!");
    }
}

void insert_at_position()
{
    int info, pos, i;
    n *prevnode;

    printf("\n enter the value that you would like to insert: ");
    scanf("%d",&info);
    printf("\n enter the position: ");
    scanf("%d",&pos);
    new = create_node(info);

    if (first == last && first == NULL)
    {
        /*  if list is empty but user specified pos = 1 */
        if(pos == 1)
        {
            first = last = new;
            first->next = last->next = NULL;
            first->prev = last->prev = NULL;
        }
        /* throw an error at all other cases when list is empty */
        else 
            printf("\n empty link list: cannot "
                    "insert at given location.");
    }
    else
    {
        /*  throw another fit if the position is out of bounds */
        if(number < pos)
            printf("\nnode cannot be entered in that location");
        else
        {
            /*  cycle through all the nodes  */
            for(ptr = first, i = 1; i <= number; i++)
            {
                /* store the node in prevnode */
                prevnode = ptr;
                /*  point to the next  */
                ptr = ptr->next;
                if(i==pos-1)
                {
                    /*alter the prevnode, prevnode and ptr are the nodes we
                     * want to sandwich between */
                    prevnode->next = new;
                    new->prev = prevnode;
                    new->next = ptr;
                    ptr->prev = new; 
                    printf("\ninserted at position %d",pos);
                    break;
                }
            }
        }
    }
}

void sort_list()
{
    n *temp;
    int tempval, i, j;

    if(first == last && first == NULL)
        printf("\nlinked list is empty no elements to sort");
    else 
    {
        /* store the first value as a ptr */
        for (ptr = first, i = 0; i < number; ptr = ptr -> next, i++)
        {
            /* store the next node as temp */
            for (temp = ptr->next, j = i ; j < number; j++)
            {
                /* store the val in temp and switch numbers if the preceeding
                 * number is greater than the next */
                if(ptr->val > temp->val)
                {
                    tempval = ptr->val;
                    ptr->val = temp->val;
                    temp->val = tempval; 
                }
            }
        }
        /* print the list in it's new order  */
        for (ptr = first, i = 0; i < number; ptr = ptr->next, i++)
            printf("\n%d", ptr->val);
    }
}

void delete_node_position()
    
{
    int pos, i;
    n *prevnode;

    /* prompt the user which position to delete */
    printf("\nEnter node # you wish to delete");
    scanf("%d",&pos);

    /* check if list is empty  */
    if(first == last && first == NULL)
        printf("\nlinked list is empty, cannot delete specified node");
    else
    {
        /* check to see if number given is within the range of linked list */
        if(pos > number)
            printf("\n the node specified is outside of list");
        else
        {
            for(ptr = first, i = 1; i <= number; i++)
            {
                /* store ptr as prevnode */
                prevnode = ptr; 
                /* update ptr  */
                ptr = first -> next;
                /* if pos = 1 delete the first node */
                if (pos == 1)
                {
                    number--;
                    /* redirect last node->next */
                    last->next = prevnode->next;
                    /* redirect 2nd node (now ptr) to the last node in list  */
                    ptr->prev = prevnode->prev;
                    /* update first  */
                    first = ptr;
                    printf("\n deleted node #%d",pos);
                    /* free up some space */
                    free(ptr);
                    break;

                }
                else if ( i == pos -1)
                {
                    number--;
                    prevnode->next = ptr->next;
                    ptr->next->prev = prevnode;
                    printf("\n deleted node #%d",pos);
                    free(ptr);
                    break; 
                }
            }
        }
    }
}


void update()
{
    int oldval, newval, i, f = 0; 
    printf("\n enter old value: ");
    scanf("%d", &oldval);
    printf("\n enter the new value: ");
    scanf("%d",&newval);
    if(first == last && first == NULL)
        printf("\nList is empty and there are no elements to update");
    else
    {
        for(ptr = first, i = 0; i < number; ptr = ptr->next, i++)
        {
            if(ptr->val == oldval)
            {
                ptr->val = newval;
                printf("value is updated to %d", ptr->val);
                f = 1;
            }
        }
        if (f==0)
            printf("\nThe input value for `old` does not exist");

    }
}

void search()
{
    int count = 0, key, i, f = 0;
    printf("\n Enter the value to be searched: ");
    scanf("%d",&key);

    if (first == last && first == NULL)
        printf("\nlist is empty no elements in list to search");
    else
    {
        for(ptr = first, i =0; i < number; i++, ptr = ptr->next)
        {
            count++;
            if(ptr->val == key)
            {
                printf("\n the value is found at position %d", count);
                f = 1;
            }
        }
        if (f == 0)
            printf("\n the value is not found in the linked list");
    }
}

void display_from_beg()
{
    int i; 
    if(first == last && first == NULL)
        printf("\nlist is empty no elements to print");
    else
    {
        printf("\nThere are %d nodes", number);
        for(ptr = first, i = 0; i < number; i++, ptr = ptr->next)
            printf("\n %d", ptr->val);
    }
}

void display_in_rev()
{
    int i;
    if (first==last && first == NULL)
        printf("\nlist is empty there are no elements");
    else
    {
        printf("\n there are %d nodes",number);
        for(ptr = last, i = 0; i < number; i++, ptr = ptr->prev)
            printf("\n %d",ptr->val);
    }
}
































































