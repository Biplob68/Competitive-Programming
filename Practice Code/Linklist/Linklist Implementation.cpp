#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};


// print the linked list value
void printLinkedlist(struct Node *p)
{
    while (p != NULL)
    {
        printf("%d->", p->data);
        p = p->next;
    }
}


int main()
{
    struct Node *head;
    struct Node *a = NULL;
    struct Node *b = NULL;
    struct Node *c = NULL;

    // Allocate memory
    a = (struct Node*)malloc(sizeof(struct Node));
    b = (struct Node*)malloc(sizeof(struct Node));
    c = (struct Node*)malloc(sizeof(struct Node));


    // Assign value values
    a->data = 10;
    b->data = 20;
    c->data = 30;

    // Connect nodes
    a->next = b;
    b->next = c;
    c->next = NULL;

    // printing node-value
    head = a;
    printLinkedlist(head);

    return 0;
}
