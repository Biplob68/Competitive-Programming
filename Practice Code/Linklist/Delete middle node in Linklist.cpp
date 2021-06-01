#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node *next;

} *head;


void CreateLinklist(int n)
{
    struct Node *temp, *current;
    int i, num;

    head = (struct Node*) malloc(sizeof (struct Node));
    printf(" Input data for 1st Node: ");

    scanf("%d", &num);

    head->data = num;
    head->next = NULL;

    temp = head;
    for(i=2; i<=n; i++)
    {
        current = (struct Node *) malloc(sizeof(struct Node));

        printf(" Input data for %dth Node: ", i);

        scanf("%d",&num);

        current->data = num;
        current->next = NULL;

        temp->next = current;  // links previous node i.e. temp to the current
        temp = temp->next;
    }

}


void display()
{
    struct Node *temp;

    temp = head;

    while(temp!=NULL)
    {
        printf("%d-> ",temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}


void DeleteMiddleNode(int position)
{

    struct Node *PreNode, *temp;

    temp = head;
    //PreNode = head;

    for(int i=2; i<=position; i++)
    {
        PreNode = temp;
        temp = temp->next;
    }

    PreNode->next = temp->next;
    temp->next = NULL;
    free(temp);
}

int main()
{
    int n;

    printf("\n\n Linked List : To create and display Singly Linked List :\n");
    printf("-------------------------------------------------------------\n");

    printf(" Input the number of nodes : ");
    scanf("%d", &n);
    CreateLinklist(n);

    printf("\nData entered in the list: \n \n");
    display();

    int position;
    printf("Enter the\ position to delete : \n");
    scanf("%d",&position);
     printf("After deleting the node : \n \n");
    DeleteMiddleNode(position);
    display();

}


