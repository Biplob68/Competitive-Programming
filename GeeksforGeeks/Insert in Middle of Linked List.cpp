/* Insert in Middle of Linked List:
-----------------------------------
Input-1:
LinkedList = 1->2->4
key = 3
Output: 1 2 3 4

Input-2:
LinkedList = 10->20->40->50
key = 30
Output: 10 20 30 40 50
*/

//Function to insert a node in the middle of the linked list
struct Node* insertInMiddle(struct Node* head, int x)
{
    struct Node *newNode, *temp;
    newNode = (struct Node *)malloc(sizeof(struct Node));

    newNode->data = x;
    newNode->next = NULL;

    temp = head;
    
    int cnt=0;
    while(temp!=NULL)
    {
        temp = temp->next;
        cnt++;
    }
    temp = head;

    if(cnt%2 ==0) cnt= cnt/2;
    else cnt = (cnt+1)/2;
    
    for(int i=2; i<=cnt; i++){
        temp = temp->next;
    }
    
    newNode->next = temp->next;  //Links the address part of new node
    temp->next = newNode;
    
    return head;
}
