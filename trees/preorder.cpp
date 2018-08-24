/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
vector<int> Solution::preorderTraversal(TreeNode* A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details

 vector<int > solution;
    stack <TreeNode * > st;
    st.push(A);
    while(!st.empty())
    {
        TreeNode * ele=st.top();
        st.pop();
        solution.push_back(ele->val);
        if(ele->right)st.push(ele->right);
        if(ele->left)st.push(ele->left);
    }
    return solution;
    
}
