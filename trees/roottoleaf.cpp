/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
 bool pathf(TreeNode * A,int sum,vector<int > path,vector<vector<int >> &sol)
 {
     if(A==NULL)return false;
     if(!A->left&&!A->right)
     {
         if(sum==A->val)
         {
            // cout<<"call";
            path.push_back(A->val);
             sol.push_back(path);
             path.clear();
             return true;
         }
         else {
             path.clear();
             return false;
         }
         
     }
     path.push_back(A->val);
  

    
     if(pathf(A->right,sum-A->val,path,sol)||pathf(A->left,sum-A->val,path,sol))
     {
    
         return true;
     }
   
     
     
   
     return false;
     
 }

vector<vector<int> > Solution::pathSum(TreeNode* A, int B) {

 vector<int > path; 
 vector<vector<int >> sol;
 pathf(A,B,path,sol);
 return sol;
}
