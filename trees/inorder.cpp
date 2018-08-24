/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
vector<int> Solution::inorderTraversal(TreeNode* A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
vector <int > solution;
    stack< TreeNode *> st;
    int done=0;
    while(!done)
    {
        if(A!=NULL)
        {
            st.push(A);
            A=A->left;
        }
        else {
            
            if(!st.empty())
            {
                TreeNode* ele=st.top();
                st.pop();
                solution.push_back(ele->val);
                A=ele->right;
            }
            else done=1;
            
        }
    } return solution;}
    

