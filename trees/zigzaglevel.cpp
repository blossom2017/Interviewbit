/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
 
vector<vector<int> > Solution::zigzagLevelOrder(TreeNode* A) {
    vector<vector<int>> sol;
    deque<TreeNode *> q;
    if(A==NULL)return sol;
    q.push_back(A);
    int flag=0;
    while(!q.empty())
    {
        int size=q.size();
         vector<int > temp;
        if(!flag)
        {
           
        
        while(size--)
        {
            TreeNode* front=q.front();
            temp.push_back(front->val);
            q.pop_front();
            if(front->left)q.push_back(front->left);
            if(front->right)q.push_back(front->right);
            
        }
       
            
        }
        else 
        {
            while(size--)
            {
                TreeNode * b=q.back();
                q.pop_back();
                temp.push_back(b->val);
                if(b->right)q.push_front(b->right);
                if(b->left)q.push_front(b->left);
            }
            
        }
         if(temp.size()>0)sol.push_back(temp);
      
          flag=~flag;
    }
    return sol;
}
