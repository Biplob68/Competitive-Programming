/* Problem: Merge two sorted linked lists and return it as a sorted list. The list should be made by splicing together the nodes of the first two lists.

Input: l1 = [1,2,4], l2 = [1,3,4]
Output: [1,1,2,3,4,4]
*/


ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        
        if(l1==NULL) return l2;
        if(l2==NULL) return l1;
        
        ListNode* head;
        
        // Select head from two node that should return 
        if(l1->val < l2->val){
            head = l1;
            l1 = l1->next;
        }
        else {
            head = l2;
            l2 = l2->next;
        }
        
        ListNode* temp = head;
        
        while(l1 && l2){
            if(l1->val <= l2->val){
                temp->next = l1;
                l1 = l1->next;
                temp = temp->next;
            }
            else if(l2->val < l1->val) {
                temp->next = l2;
                l2 = l2->next;
                temp = temp->next;
            }    
        }
        
        // Rest of the list add with temp
        if(l1) temp->next = l1;
        else temp->next = l2;
        
        return head;
}
