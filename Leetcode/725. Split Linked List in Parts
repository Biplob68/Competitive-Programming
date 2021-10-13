/* Problem : Given the head of a singly linked list and an integer k, split the linked list into k consecutive linked list parts.

Input: head = [1,2,3], k = 5
Output: [[1],[2],[3],[],[]]

Input: head = [1,2,3,4,5,6,7,8,9,10], k = 3
Output: [[1,2,3,4],[5,6,7],[8,9,10]]
*/

vector<ListNode*> splitListToParts(ListNode* head, int k) {
        
        vector<ListNode* > ans;
        int total_node =0;
        auto node = head;
        
        // count the total node in the linklist
        while(node!=NULL){
            total_node++;
            node=node->next;
        }
        
        auto temp= head; 
        
        while(k){
            int a = ceil(double(total_node)/double(k));
            
            // Push head node to the vector
            ans.push_back(temp);

            total_node -= a;
            k--;
            
            // iterator for new positon of head 
            while(--a&&temp!=NULL){
                temp= temp->next;
            }
            
            // set the head new position
            if(temp!=NULL){
                head= temp->next;
                temp->next=NULL;
                temp= head;
            }        
        }
        return ans;
}
