/* Problem: Given the head of a linked list, remove the nth node from the end of the list and return its head.
Input: head = [1,2,3,4,5], n = 2
Output: [1,2,3,5]
Input: head = [1], n = 1
Output: []
*/

ListNode* removeNthFromEnd(ListNode* head, int n) {
        
        struct ListNode *pre, *temp = head;
        int cnt = 1;
        
        // count toal node number
        while(temp->next != NULL){
            temp = temp->next;
            cnt++;
        }
      
        pre = temp = head;
        
        // point the target node that should remove
        for(int i=1; i<=cnt-n; i++){
            pre = temp;
            temp = temp->next;
        }
  
        // if first node should remove then set head to next node
        // otherwise remove the node
        if(temp == pre) head = head->next;
        else pre->next = temp->next;
        
        //temp->next = NULL;
        //free(temp);
        
        return head;
    }
