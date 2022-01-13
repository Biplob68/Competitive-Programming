/ * You are given two non-empty linked lists representing two non-negative integers. The digits are stored in reverse order, and each of their nodes contains a single digit. 
 Add the two numbers and return the sum as a linked list.
Input: l1 = [2,4,3], l2 = [5,6,4]
Output: [7,0,8]
Explanation: 342 + 465 = 807.*/
  

ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        
        ListNode* l3 = new ListNode(0);
        
        ListNode* head = l3;
        
        while(true){
            
            int sum = l3->val;
            
            if(l1 != NULL){
                sum += l1->val;
                l1 = l1->next;
            }
            if(l2 != NULL){
                sum += l2->val;
                l2 = l2->next;
            }
             l3->val = (sum % 10);
            
            if(l1==NULL && l2==NULL && sum < 10) break;
            
            // Initialize next node to the carry
            l3->next = new ListNode(sum/10);
            l3 = l3->next;
            
        }
        
        return head;
}
