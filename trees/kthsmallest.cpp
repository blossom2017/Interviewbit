/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
 void inorder(TreeNode * root,vector<int > &solution)
 {
     if(root==NULL)return ;
     if(root)
     {
         inorder(root->left,solution);
         solution.push_back(root->val);
         inorder(root->right,solution);
     }
 }
 
int Solution::kthsmallest(TreeNode* root, int k) {
    vector<int > solution;
    inorder(root,solution);
    return solution[k-1];
    
}
