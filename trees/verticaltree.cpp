/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *  int vlevel;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
 void leftlevel(TreeNode * A,int l,int &min,int &max)
 {
     if(A==NULL)return ;
     if(l<min)min=l;
     if(l>max)max=l;
     if(A->left)leftlevel(A->left,l-1,min,max);
     if(A->right)leftlevel(A->right,l+1,min,max);
 }
 void assignlevel1(TreeNode * A,int sl,vector<vector<int > > &solution)
 {
     if(A==NULL)return ;
     queue<TreeNode * > q;
     queue<int > index;
     q.push(A);
     index.push(sl);
     
     while(!q.empty())
     {
         TreeNode * ele=q.front();
         q.pop();
         int in=index.front();
         index.pop();
         solution[in].push_back(ele->val);
        if(ele->left){ q.push(ele->left);
         index.push(in-1);}
         if(ele->right)
         {
         q.push(ele->right);
         index.push(in+1);
         }
     }
 }
 
vector<vector<int> > Solution::verticalOrderTraversal(TreeNode* A) {
    int right=0;
    TreeNode * ptr=A;
   int lb=0,rb=0;
    leftlevel(A,0,lb,rb);
    lb=abs(lb);
    int bounds=lb+rb;
    vector<vector<int > > solution(bounds+1,vector<int > (0));
   assignlevel1(A,lb,solution);
   vector< vector<int > > resize;
   for(int i=0;i<bounds+1;i++)
   {
       if(solution[i].size()>0)resize.push_back(solution[i]);
   }
   return resize;
}
