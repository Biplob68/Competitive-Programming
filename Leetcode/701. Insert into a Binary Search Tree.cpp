/* Problem: You are given the root node of a binary search tree (BST) and a value to insert into the tree. Return the root node of the BST after the insertion.
It is guaranteed that the new value does not exist in the original BST.
Input: root = [40,20,60,10,30,50,70], val = 25
Output: [40,20,60,10,30,50,70,null,null,25]
*/
// function to insert a new node into BST
TreeNode* insertIntoBST(TreeNode* root, int val) {
        TreeNode* temp = root;
        
        // When temp is null we have to create a new node 
        if (temp == NULL) return createNode(val);
        
        // Recursive call to set a new node into BST
        else if(val<= temp->val){
            temp->left = insertIntoBST(temp->left, val);
        }
        else temp->right = insertIntoBST(temp->right, val);
        
        return temp;
}
    
// fnction to create a new node
TreeNode*createNode(int value){
        TreeNode* newNode = new TreeNode();
        newNode->val = value;
        newNode->left = NULL;
        newNode->right = NULL;

        return newNode;
}
