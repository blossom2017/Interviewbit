/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
bool findpath(TreeNode * A,int k,vector<int >&path )
 {
     if(A==NULL)return false;
     path.push_back(A->val);
     if(A->val==k)return true ;
     else if(A->left&&findpath(A->left,k,path)||A->right&&findpath(A->right,k,path)) return true;
     path.pop_back();
     return false;
 }
int Solution::lca(TreeNode* A, int val1, int val2) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified

    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
vector <int > path1;
vector<int > path2;
 findpath(A,val1,path1);
 findpath(A,val2,path2);
 int i=0;
 if(path1.size()>0&&path2.size()>0)
 {
     while(i<path1.size()&&i<path2.size()&&path1[i]==path2[i])
     {
        i++;
     
     }
      return path1[i-1];
 }
 else return -1;
    
}
