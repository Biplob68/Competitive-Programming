/*Problem: Given the head of a singly linked list, group all the nodes with odd indices together followed by the nodes with even indices, and return the reordered list.
The first node is considered odd, and the second node is even, and so on.
Input: head = [1,2,3,4,5]
Output: [1,3,5,2,4]
Input: head = [2,1,3,5,6,4,7]
Output: [2,3,6,7,1,5,4]
*/


ListNode* oddEvenList(ListNode* head) {
        
        
        if(head == NULL || head->next == NULL) return head;
        ListNode *odd = head, *even = head->next, *first_even = even;
        
        
        while(even && even->next){
          
            // Seperate all even and odd node
            // and connect between them
            odd->next = odd->next->next;
            even->next = even->next->next;
            
            odd = odd->next;
            even = even->next;
        }
  
        // Coneect last odd node with first even node
        odd->next = first_even;
        return head;
}
