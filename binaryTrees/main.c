#include<stdio.h>
#include<stdlib.h>

/* user a structure to medel the binary search tree node */
typedef struct node
{
    int data;
    struct node* left;
    struct node* right;
} node;

/* create a new node */

node* create_node(int data)
{
    node *new_node = (node*)malloc(sizeof(node));
    if(new_node == NULL)
    {
        fprintf(stderr, "Out of memory!! (create_node)\n");
        exit(1);
    }
    new_node->data = data;
    new_node->left = NULL;
    new_node->right = NULL;
    return new_node;
}

typedef int (*comparer)(int, int);

node* insert_node(node *root, comparer compare, int data)
{
    if(root == NULL)
    {
        root = create_node(data);
    }
    else
    {
        int is_left = 0;
        int r = 0;
        node* cursor = root;
        node* prev = NULL;

        while(cursor != NULL)
        {
            r = compare(data,cursor->data);
            prev = cursor;
            if(r < 0)
            {
                is_left = 1;
                cursor = cursor->left;
            }
            else if (r > 0)
            {
                is_left = 0;
                cursor = cursor->right;
            }
        }
        if(is_left)
            prev->left = create_node(data);
        else
            prev->right = create_node(data);
    }
    return root;
}


int main()
{
    return 0; 
}
