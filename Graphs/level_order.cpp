/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
vector<vector<int> > Solution::levelOrder(TreeNode* A) {
    vector<vector<int>> ans;
    if(!A)return ans;
    queue<TreeNode *> q;
    q.push(A);
    while(!q.empty())
    {
        int size = q.size();
        vector<int> temp;
        while(size)
        {
            TreeNode * front = q.front();
            q.pop();
            temp.push_back(front->val);
            if(front->left)q.push(front->left);
            if(front->right)q.push(front->right);
            size--;
        }
        ans.push_back(temp);
    }
    return ans;
}
