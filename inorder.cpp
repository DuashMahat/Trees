void inorder (TreeNode* root , vector<int> & v ) {
     if (!root ) return;
     if (!(!root->left)) inorder ( root->left , v );
     v.push_back(root->val);
     if (!(!root->right)) inorder ( root->right , v );
}
    
vector<int> inorderTraversal(TreeNode* root) {
       // left  root and right : that is inoreder 
        if (!root ) return {};
        vector<int> v;
        inorder ( root  , v);
        return v;
}
