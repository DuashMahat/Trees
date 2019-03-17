


/*

Given a binary tree, return the bottom-up level order traversal of its nodes' values. (ie, from left to right, level by level from leaf to root).

For example:
Given binary tree [3,9,20,null,null,15,7],

return its bottom-up level order traversal as:

[
  [15,7],
  [9,20],
  [3]
]

*/


vector<vector<int>> levelOrderBottom(TreeNode* root) {
        vector<vector<int>> v;
        if (root == NULL ) return v;
        queue <TreeNode* > q{{root}};
        while (!q.empty())  {
          vector<int> temp;
          for (int i = q.size(); i > 0; i-- ) {
             TreeNode * t = q.front(); q.pop();
             temp.push_back(t->val);
             if (t->left) q.push(t->left);
             if (t->right)q.push(t->right);
          }
         v.push_back(temp);
        }
       reverse (v.begin(), v.end());
       return v;
 }
