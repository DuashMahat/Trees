

/*

A binary tree is univalued if every node in the tree has the same value.

Return true if and only if the given tree is univalued.

Input: [1,1,1,1,1,null,1]
Output: true

*/



bool  isUnivalued ( TreeNode * root  , int & val  ) {
       if (root == NULL ) return true;
       if (root->val  != val ) return false;
       return isUnivalued  ( root->left , val )  && isUnivalued  ( root->right , val);
    }
 
bool isUnivalTree(TreeNode* root) {
        if (root == NULL ) return true;
        return isUnivalued  ( root , root->val);
}
