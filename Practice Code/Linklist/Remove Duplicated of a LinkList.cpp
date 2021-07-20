#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node *next;
}*head;

// Function to create linklist
void CreateLinklist(int n)
{

    struct Node *temp, *current;
    int i,num;

    head = (struct Node *)malloc(sizeof (struct Node));

    printf(" Input data for node 1 : ");
    scanf("%d", &num);
    head->data = num;

    head->next = NULL; // links the address field to NULL
    temp = head;


    for(i=2; i<=n; i++)
    {
        current = (struct Node *)malloc(sizeof(struct Node));
        printf(" Input data for node %d : ", i);
        scanf(" %d", &num);

        current->data = num;      // links the num field of current with num
        current->next = NULL;     // links the address field of current with NULL

        temp->next = current;     // links previous node i.e. temp to the current
        temp = temp->next;
    }
}

// function to print linklist
void display()
{
    struct Node *temp;
    temp = head;

    while(temp!=NULL)
    {
        printf("%d -> ",temp->data);
        temp= temp->next;
    }
    printf("NULL\n");

}

void remove_duplicated()
{
    struct Node *node1, *node2, *temp;

    node1 = head;

    while(node1!=NULL && node1->next!=NULL)
    {
        node2 = node1;

        while(node2->next != NULL)
        {
            if(node1->data == node2->next->data)
            {
                temp = node2->next;
                node2->next = node2->next->next;
                delete(temp);
            }
            else{
                node2= node2->next;
            }

        }
        node1= node1->next;
    }
}

int main()
{
    struct Node *temp;
    int n;
    printf("\n\n Linked List : To create and display Singly Linked List :\n");
    printf("-------------------------------------------------------------\n");

    printf(" Input the number of nodes : ");
    scanf("%d", &n);
    CreateLinklist(n);

    printf("\nData entered in the list: \n \n");
    display();

    printf("LinkList after removing duplicated!\n");

    remove_duplicated();
    display();
    return 0;
}
