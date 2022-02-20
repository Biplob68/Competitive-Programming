/* Problem: You are given the head of a linked list, which contains a series of integers separated by 0's. The beginning and end of the linked list will have Node.val == 0.

For every two consecutive 0's, merge all the nodes lying in between them into a single node whose value is the sum of all the merged nodes. 
The modified list should not contain any 0's. Return the head of the modified linked list.
Input: LinkList = 0-->3-->1-->0-->4-->5-->2-->0
Output: 4-->11
*/
ListNode* mergeNodes(ListNode* head) {
      head=head->next;
      ListNode* start=head;
        
      while(start != NULL){
          ListNode* end = start;
          int sum = 0;
          while(end->val!=0) {
              sum += end->val;
              end = end->next;
          }
          start->val = sum;   // assign sum to first node between two 
          start->next = end->next;   // make this connect first node of next part
          start = start->next;    // Go for next part
     }
     return head;
}
