


/*

Runtime: 4 ms, faster than 100.00% of C++ online submissions for Binary Tree Preorder Traversal.
Memory Usage: 9.6 MB, less than 14.35% of C++ online submissions for Binary Tree Preorder Traversal.

*/


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
