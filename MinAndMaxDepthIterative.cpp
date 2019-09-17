

/*
  Minium and mAX depth of a BST iteravative 

*/


#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
using namespace std;

struct Tree {
   int val;
   Tree * left , * right;
   Tree (int _val) : val(_val) , left(NULL) , right(NULL) {}
};

Tree * createTree ( int value )  {
  Tree * tree = new Tree (value);
  return tree;
}


Tree * insertNode (Tree * root , int value ) {
    if ( root == NULL ) {
       root = createTree ( value);
   } else if ( value < root->val ) {
      root->left = insertNode( root->left , value);
   } else {
     root->right = insertNode ( root->right , value);
   }
   return root;
}

void printTreeNodes ( Tree * root ) {
    // Tree * temp = root;
    if (!root) return;
    if (!(!root->left)) printTreeNodes (root->left);
    cout << root->val << " ";
    if (!(!root->right)) printTreeNodes (root->right);
}


/* GET MINIMUM HEIGHT */

int minDepth ( Tree * root )  {
        if (!root) return 0;
        std::queue<Tree*>q ;
        q.push(root);
        int depth = 0 , j = 0;
        while (!q.empty()) {
          depth++;
          j = q.size();
          for (int i = 0; i < j; ++i ) {
              Tree * f = q.front();
              q.pop();   
              
              if (f->left) q.push(f->left);
              if (f->right) q.push(f->right);
              
              if (!f->left  && !f->right) return depth;
          }
        }
        
        return depth;
}


 int maxDepth(Tree  * root) {
        // write your code here
        if (!root) return 0;
        std::queue<Tree*> q ;
        q.push(root);
        q.push(NULL);
        int depth = 0 ;
        while (!q.empty()) {
            Tree * f = q.front();
            q.pop();
            
            if (!f) {
                
                depth++;
                if (!q.empty()) q.push(NULL);
               
            } else {
                if (f->left) q.push(f->left);
                if (f->right) q.push(f->right);
            }
            
        }
        
        return depth;
    }


int main() {
    /*
             
             10
          5      19
      4     8   11    20  
                         29
        
      

    */
      Tree * root = NULL;
        root = insertNode ( root , 10);
    root = insertNode ( root , 5);
     root = insertNode ( root , 19);
      root = insertNode ( root , 4);
       root = insertNode ( root , 8);
        root = insertNode ( root , 11);
         root = insertNode ( root , 20);
          root = insertNode ( root , 29);
    // printTreeNodes (root);
    cout << minDepth(root) - 1 << endl;
      cout << maxDepth(root) - 1 << endl;

}
