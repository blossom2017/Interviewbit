/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
 int isvalid(TreeNode* A,int minrange,int maxrange )
 {
     if(A==NULL)return 1;
     else if(A->val>minrange&&A->val<maxrange&&isvalid(A->left,minrange,A->val) &&isvalid(A->right,A->val,maxrange) )
     return 1;
     else return 0;
         
     
     
 }
int Solution::isValidBST(TreeNode* A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details

   return isvalid(A,INT_MIN,INT_MAX);
    
    
}
