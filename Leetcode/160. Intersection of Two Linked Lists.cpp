/* Problem : Given the heads of two singly linked-lists headA and headB, return the node at which the two lists intersect. 
If the two linked lists have no intersection at all, return null.
Input: listA = [4,1,8,4,5], listB = [5,6,1,8,4,5]
Output: Intersected at '8'
*/

ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        
        struct ListNode *nodeA, *nodeB;
        nodeA = headA; 
        nodeB = headB;
        
        if(nodeA == NULL || nodeB == NULL) return nodeA;
        
        while(nodeA != nodeB){
            
            nodeA = nodeA->next;
            nodeB = nodeB->next;
            
            // if two pointer are same then return a node
            if(nodeA == nodeB) return nodeA;
            
            // When a pointer will be null then start it again from head node
            if(nodeA == NULL) nodeA = headA;
            if(nodeB == NULL) nodeB = headB;
            
        }
        
        return nodeA;
}
