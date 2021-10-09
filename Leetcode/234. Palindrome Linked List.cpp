/* problem: Given the head of a singly linked list, return true if it is a palindrome.
Input: head = [1,2,2,1]
Output: true
Input: head = [1,2]
Output: false
*/
bool isPalindrome(ListNode* head) {
	
        stack<ListNode*> nodeStack; 
		
        ListNode* temp = head;
  
        // All node insert into a stack
        while (temp) {
            nodeStack.push(temp);
            temp = temp->next;
        }
        
        while (head) {
            if (head->val != nodeStack.top()->val) { 
                return false;  // If the values differ, it isn't a palindrome.
            }
            nodeStack.pop();
            head = head->next;
        }
        return true; 
}
// Time Complexity : O(n)
// Space Complexity : O(n)
