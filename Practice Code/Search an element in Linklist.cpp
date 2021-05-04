#include<stdio.h>
#include<stdlib.h>


struct Node
{
    int data;
    struct Node *next;
};


struct Node *LinklistArray(int arra[], int size)
{
    struct Node *head=NULL, *temp=NULL, *current = NULL;
    int i;
    for(i=0; i<size; i++)
    {
        temp = (struct Node *)malloc(sizeof (struct Node));
        temp->data = arra[i];
        temp->next = NULL;

        if(head == NULL)
        {
            head = temp;
            current = temp;
        }
        else
        {
            current->next = temp;
            current = current->next;
        }

    }
    return head;
}

int SearchItem(struct Node *head, int value)
{
    int index = 1;

    while(head != NULL)
    {
        if(head->data == value)
        {
            return index;
        }
        index++;
        head = head->next;
    }
    return 0;
}

int main()
{
    int a[] = {5, 20, 30,40,50,60};
    struct Node *head;
    head = LinklistArray(a, 6);
    printf("Index = %d\n",SearchItem(head,50));

    return 0;
}
