// BST Inorder Traversal Using stack
vector <int> inorderTraversal(TreeNode root) {
    vector<int>v;
    if(root == null) return v;
  
    stack <int> stack;
  
    while(root != null || !stack.empty()){
        while(root != null){
            stack.push(root);
            root = root->left;
        }
      
        root = stack.top();
        stack.pop();
        v.push_back(root->val);
        root = root->right;
        
    }
    return v;
}

