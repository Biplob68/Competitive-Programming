/* Problem: Given head, the head of a linked list, determine if the linked list has a cycle in it.
Input: head = [3,2,0,-4], pos = 1
Output: true
Explanation: There is a cycle in the linked list, where the tail connects to the 1st node (0-indexed).
*/


// Function to check the linklist exit a cycle or not
bool hasCycle(ListNode *head) {
        struct ListNode *slow, *fast;
        slow = head;
        fast = head;
        
        //if(pos == -1) return false;
        
        while(slow && fast && fast->next){
            slow = slow->next;
            fast = fast->next->next;
            
            if(slow == fast) return true;
        }
        
        return false;
}

// Time Complexity : O(n)
// Space Complexity : O(1)
