/* Given the head of a linked list and an integer val, remove all the nodes of the linked list that has Node.val == val, and return the new head.
Input: head = [1,2,6,3,4,5,6], val = 6
Output: [1,2,3,4,5]

Input: [2,2,2], val = 2
Output: []
*/

ListNode* removeElements(ListNode* head, int val) {
        
        if(head == NULL) return head;
        
        // remove all val from front side of head
        while(head && head->val == val){
            head = head->next;
        }
        struct ListNode *temp = head, *pre=head, *nex;
        
        while(temp != NULL){
            
            // if node value is equal to val then remove it
            if(temp->val == val){
                nex = temp->next;
                pre->next = nex;
                temp = nex;
            }
            // otherwise move the temp
            else {
              pre = temp;
              temp = temp->next;
            }
        }
       
        return head;
}
// Time Complexity: O(n)
// Space Complexity: O(1)
