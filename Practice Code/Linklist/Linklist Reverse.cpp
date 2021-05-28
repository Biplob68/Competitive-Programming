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


void ReverseList()
{
    struct Node *preNode = NULL, *currentNode = head, *nextNode = NULL;

    while(currentNode != NULL)
    {
        nextNode = currentNode->next;
        currentNode->next = preNode; //Reverse the list

        preNode = currentNode;
        currentNode = nextNode;
    }
    head = preNode;
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


    ReverseList();
    printf("\n Data after reverse the Linklist : \n");
    display();

    return 0;
}
