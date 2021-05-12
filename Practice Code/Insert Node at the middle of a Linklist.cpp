#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node *next;
}*head;


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

void Insertatmiddle(int num, int position)
{
    struct Node *newNode, *temp;
    newNode = (struct Node *)malloc(sizeof(struct Node));

    newNode->data = num;
    newNode->next = NULL;

    temp = head;

    for(int i=2; i<position; i++)
    {
        temp = temp->next;
        if(temp == NULL) break;

    }
    newNode->next = temp->next;  //Links the address part of new node
    temp->next = newNode;

}


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

int main()
{
    int n,num,position;
    printf("\n\n Linked List : To create and display Singly Linked List :\n");
    printf("-------------------------------------------------------------\n");

    printf(" Input the number of nodes : ");
    scanf("%d", &n);
    CreateLinklist(n);

    printf("\nData entered in the list: \n \n");
    display();


    printf("\n Input data and position to insert at the Middle of the list : ");
    scanf("%d %d", &num, &position);
    Insertatmiddle(num, position);
    printf("\n Data after inserted in the list are : \n");
    display();

    return 0;
}
