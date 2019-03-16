

/*

Given a binary tree, check whether it is a mirror of itself (ie, symmetric around its center).

For example, this binary tree [1,2,2,3,4,4,3] is symmetric:

Using recursive strategy 
*/


 bool checkEquality ( TreeNode * l , TreeNode * r ) {
       if ( !l  && !r ) return true;
       if ( !l  && r   ||  l && !r  ||  l->val  != r->val ) return false;
       return checkEquality ( l->left , r-> right )  && checkEquality(l->right , r->left);
    }
    
    
    
 bool isSymmetric  (TreeNode* root) {
       if ( root == NULL )   return true;
       return checkEquality ( root->left , root->right);
 }
