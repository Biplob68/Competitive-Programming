/* Problem: Given a linked list, swap every two adjacent nodes and return its head. 
You must solve the problem without modifying the values in the list's nodes (i.e., only nodes themselves may be changed.)
Input: head = [1,2,3,4,5,6]
Output: [2,1,4,3,6,5]
*/

 /* Solution:
* First, we swap the first two nodes in the list, i.e. head and head->next;
* Then, we call the function self as swap(head->next->next) to swap the rest of the list following the first two nodes.
* Finally, we attach the returned head of the sub-list in step (2) with the two nodes swapped in step (1) to form a new linked list.
*/

ListNode* swapPairs(ListNode* head) {
        
        // 1 -> 2 -> 3 -> 4
        
        if(head == NULL || head->next==NULL) return head;
        
        // store 2nd node into new_node
        ListNode* new_head = head->next; // new_head = 2
        
        // store third node
        ListNode* third_node = head->next->next; // third_node = 3
        
        // Connect node 2 with 1
        new_head->next = head; // 2 -> 1 
        
        // Recursivly call swappairs fun and connect 1 with them 
        // 1 ---> 3
        head->next = swapPairs(third_node);
        
        // return new_head;
        return new_head;
           
}
