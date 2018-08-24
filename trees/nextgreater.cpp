/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
 TreeNode * minval(TreeNode * root)
 {
     TreeNode * ptr=root;
     while(ptr->left!=NULL)
     {
         ptr=ptr->left;
     }
     return ptr;
 }
TreeNode* Solution::getSuccessor(TreeNode* A, int B) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details

  //  if(A->right!=NULL)return minval(A->right);
    
        TreeNode * n=NULL;
          TreeNode * succ=NULL;
        TreeNode * root=A;
        while(root!=NULL)
        {
            if(root->val==B){n=root;break;}
            else if(B<root->val){succ=root;root=root->left;}
            else root=root->right;
        }
        if(n->right!=NULL)return minval(n->right);
        /*
        else {
             TreeNode * succ=NULL;
        TreeNode * root=A;
        while(root!=NULL)
        {
            if(B<root->val)
            {
                succ=root;
                root=root->left;
                
            }
            else if(B>root->val)root=root->right;
            else break;
            
        */
        else return (succ);
    }
    

