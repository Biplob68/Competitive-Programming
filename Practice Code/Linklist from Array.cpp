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

        if(head == NULL){
            head = temp;
            current = temp;
        }
        else{
            current->next = temp;
            current = current->next;
        }

    }
    return head;
}


int main()
{
    int a[] = {5, 20, 30};
    struct Node *head;
    head = LinklistArray(a, 3);

    while(head!=NULL){
        printf("%d -> ",head->data);
        head = head->next;
    }
    printf("NULL\n");

    return 0;
}
