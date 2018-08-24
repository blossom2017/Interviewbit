/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
int Solution::hasPathSum(TreeNode* A, int B) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details

    if(A==NULL){
        if(B==0){return 1;}
        else return 0;
    }
    else {
        int ans=0;
        int subsum=B-A->val;
        if(A->left==NULL&&A->right==NULL&&subsum==0){return 1;}
         if(A->left)
        {
            ans=ans||hasPathSum(A->left,subsum);
            
        }
        if(A->right)
        {
            ans=ans||hasPathSum(A->right,subsum);
        }
        return ans;
    }
    
}
