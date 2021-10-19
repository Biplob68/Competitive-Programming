class BSTIterator {
    stack<TreeNode*> st;
    
public:
    
    // First Push all left side node into stack
    BSTIterator(TreeNode* root) {
        leftnode(root);
    }
    
    int next() {
        TreeNode* top=st.top();
        st.pop();
        // If right node not null then push all right side left node into stack
        if(top->right != NULL) leftnode(top->right);
        // Altime return top node value of the stck
        return top->val;
    }
    
    bool hasNext() {
        if(st.empty()) return false;
        else return true;
    }
    
    // function to push all left node into stack
    void leftnode(TreeNode* root){
       
        TreeNode* temp=root;
        while(temp!=NULL){
            st.push(temp);
            temp = temp->left;
        }
    }
};
