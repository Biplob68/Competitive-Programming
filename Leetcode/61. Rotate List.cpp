/* Problem: Given the head of a linked list, rotate the list to the right by k places.

Input: head = [1,2,3,4,5], k = 2
Output: [4,5,1,2,3]

Input: head = [0,1,2], k = 4
Output: [2,0,1]
*/

ListNode* rotateRight(ListNode* head, int k) {
    
        if(head == NULL || head->next == NULL || k==0) return head;
        
        ListNode* node = head;
        int cnt = 1;
        // count the number of nodes
        while(node->next != NULL){
            cnt++;
            node = node->next;
        }
        // Link between last node to head node
        node->next = head;
        
        // Handle when k is greater than node number
        k = k % cnt;
        
        while( cnt>k ){
            cnt--;
            node = node->next;
        }
        // return first node and cut the link
        ListNode* first_node = node->next;
        node->next = NULL;
        
        return first_node;
 }
