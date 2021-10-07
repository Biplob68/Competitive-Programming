/* Problem : Given the head of a singly linked list, reverse the list, and return the reversed list.
Input: head = [1,2,3,4,5,6,7]
Output: [7,6,5,4,3,2,1]
Input: head = []
Output: []
*/

// function to reverse the full linklist 
ListNode* reverseList(ListNode* head) {
        
        struct ListNode *pre = NULL, *current = head, *next;
        
        while(current != NULL){
            
            // save current's next node into next node
            next = current->next;
            // reverse the current node 
            current->next = pre;
            
            // then move current and pre node
            pre = current;
            current = next;
        }
        // return pre node that is head node of the list
        return pre;
}

// Time Complexity : O(n)
// Space Complexity : O(1)
