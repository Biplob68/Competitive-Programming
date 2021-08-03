#include<stdio.h>
#include<stdlib.h>

// A structure of linked list node
struct Node
{
    int data;
    struct Node *next;
}*head;


// Function to create linkList
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

// function to print linkList
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

// Function to detect cycle in linklist
void cycledetect(struct Node *head)
{
    struct Node *fast_node, *slow_node;
    fast_node = slow_node = head;

    while(slow_node && fast_node && fast_node->next)
    {
        slow_node = slow_node->next;
        fast_node = fast_node->next->next;

        if(fast_node == slow_node){
            printf("Linked List contains a loop\n");
            return;
        }
    }
    printf("No Loop in Linked List\n");
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

    // Create loop in linked list. Set next pointer of last node to second node from head
    head->next->next->next->next->next = head->next;
    cycledetect(head);

    return 0;

}

/*
-----------------------------
Using Hash Map:
-----------------------------
bool detectLoop(struct node *ptr)
{
    unordered_set< node *> s;
    while (ptr != NULL)
    {
        if (s.find(ptr) != s.end())
            return true;
        s.insert(ptr);
        ptr = ptr->next;
    }
    return false;
}
Complexity : O(n)
*/
