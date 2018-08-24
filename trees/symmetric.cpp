/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
 
 void change(TreeNode * A,TreeNode * B)
 {
     if(A==NULL)return ;
     else {
        TreeNode * new1=new TreeNode(0);
        TreeNode * new2=new TreeNode(0);
        new1->val=A->right->val;
        new1->right=A->right->right;
        new1->left=A->right->left;
        new2->val=A->left->val;
        new2->right=A->left->right;
        new2->left=A->left->left;
        
       B->left=new1;
       B->right=new2;
       change(A->left,B->left);
       change(A->right,B->right);
     }
 }
 
 int isSameTree(TreeNode* A, TreeNode* B) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
if(A==NULL&&B==NULL)return 1;
else if(A==NULL||B==NULL)return 0;
if(A->val==B->val&&isSameTree(A->left,B->right)&&isSameTree(A->right,B->left))return 1;
    return 0;
    
}
int Solution::isSymmetric(TreeNode* A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details

int ans=isSameTree(A,A);
    return ans;
    
}
