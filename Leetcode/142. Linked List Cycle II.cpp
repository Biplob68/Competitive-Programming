/* Problem: Given the head of a linked list, return the node where the cycle begins. If there is no cycle, return null.There is a cycle in a linked list if
there is some node in the list that can be reached again by continuously following the next pointer. pos is used to denote the index of the node that tail's next pointer is connected to (0-indexed). 
It is -1 if there is no cycle. Note that pos is not passed as a parameter.
Input: head = [3,2,0,-4], pos = 1
Output: tail connects to node index 1
*/

// Function to find out the node where cycle brgin!
ListNode *detectCycle(ListNode *head) {
        
        struct ListNode *slow, *fast;
        slow = head;
        fast = head;
        
        while(fast && fast->next != NULL){
            
            fast = fast->next->next;
            slow = slow->next;
            
            // When first and slow pointer will meet 
            // then we set slow as head 
            // Again forward two pointer and the meeting position will be target node
            if(slow == fast) { // cycle found
                slow = head; // set slow as head node
                while(slow != fast) {
                    // Both move by 1 step
                    slow = slow->next;
                    fast = fast->next;
                }
                // No loop found 
                return slow;
            }
            
        }
        
        return NULL;
}
