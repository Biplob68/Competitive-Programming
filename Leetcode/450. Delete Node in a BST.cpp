/* Problem: Given a root node reference of a BST and a key, delete the node with the given key in the BST. Return the root node reference (possibly updated) of the BST. */

TreeNode* deleteNode(TreeNode* root, int key) {

        if(root==NULL) return root;
        
        // If the val is smaller than the root, then search left tree
        if(key<root->val) {
            root->left = deleteNode(root->left, key);
        }
        
         // If the val is greate than the root, then search right tree
        else if(key>root->val) {
            root->right = deleteNode(root->right, key);
        }
        
        // This is our target node to be deleted
        else {
            
             /* Leaf node case */
            if (!root->left && !root->right) {
                delete(root);
                return NULL;
            }
            /* 1 child case */
            if (!root->left || !root->right) {
                TreeNode *temp = root->left ? root->left : root->right;
                delete(root);
                return temp;
            }
            /* 2 child case */
            // find out successor and delete the node
            if (root->left && root->right) {
                TreeNode *tmp = root->right;
                while (tmp->left) {
                    tmp = tmp->left;
                }
                root->val = tmp->val;
                root->right = deleteNode(root->right, root->val);
            }  
        }
        
        return root;
}
