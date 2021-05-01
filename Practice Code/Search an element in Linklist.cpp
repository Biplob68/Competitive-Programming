#include<stdio.h>
#include<stdlib.h>


struct Node
{
    int data;
    struct Node *next;
};


Node *CreateLinklist(int value, Node *next)
{
    struct Node *a = NULL;
    a = (struct Node*)malloc(sizeof(struct Node));

    a->data = value;


    return a;

}

int main()
{
    Node *x, *y, *z;
    x = CreateLinklist(10, NULL);
    y = CreateLinklist(20, NULL);

    printf("Data %d\n", x->data);

    return 0;
}
