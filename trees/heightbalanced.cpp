/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
 int max(int a,int b)
 {
     if(a>b)return a;
     else return b;
 }
 int height(TreeNode * A)
 {
     if(A==NULL)return 0;
     else return (1+max(height(A->left),height(A->right)) );
 }
int Solution::isBalanced(TreeNode* A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    int ans;
    if(A==NULL)return 1;
if(abs(height(A->left)-height(A->right))==1||abs(height(A->left)-height(A->right))==0)
{
    ans=1;
    ans=ans&&isBalanced(A->left)&&isBalanced(A->right);
}
    
    else ans=0;
    return ans;
    
}
