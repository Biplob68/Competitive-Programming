/* Problem: Given the head of a sorted linked list, delete all nodes that have duplicate numbers, leaving only distinct numbers from the original list. 
Return the linked list sorted as well. */

ListNode* deleteDuplicates(ListNode* head) {
        if(head==NULL || head->next==NULL) return head;
        
        ListNode *curNode = head;
        ListNode *preNode = NULL;
        
        while(curNode != NULL && curNode->next != NULL){
            
            if(curNode->val == curNode->next->val){
                while(curNode->next != NULL && curNode->val == curNode->next->val){
                    curNode = curNode->next;
                }
                if(preNode != NULL) {
                    preNode->next = curNode->next;
                    curNode = curNode->next;
                }
                else {
                    head = curNode->next;
                    curNode = curNode->next;
                }
            }
            else {
                preNode = curNode;
                curNode = curNode->next;
            }
        }
        
        return head;
}
