


*/ Given a Binary Search Tree (BST) with the root node root, return the minimum difference between the values of any two different nodes in the tree. */ 



 void inorder ( TreeNode * root , vector<int> & v ) {
        if (!root) return;
        if (!(!root->left)) inorder (root->left , v);
        v.push_back(root->val);
        if (!(!root->right)) inorder (root->right , v);   
    }
    
    
   int minDiffInBST(TreeNode* root) {
       vector<int> v;
       int minVal  = INT_MAX;
       inorder (root ,  v ) ;
       for (int i = 1; i < v.size(); ++i ){
          minVal = min ( minVal  , v[i] - v[i - 1]);
       }
       return minVal;
    }
