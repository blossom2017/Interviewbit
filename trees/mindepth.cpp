/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
 int min (int a ,int b)
 {
     if(a==0&&b==0)return 0;
     if(a<b&&a!=0)return a;
     else if(a>b&&b!=0)return b;
     else if(a<b &&a==0)return b;
     else return a;
 }
int Solution::minDepth(TreeNode* A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details

    if(A==NULL)return 0;
    else return (1+min(minDepth(A->left),minDepth(A->right)));
}
