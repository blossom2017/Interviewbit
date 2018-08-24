void dfs(int i, int j,vector<vector<char>> &A)
{
    A[i][j]='$';
    int m = A.size();
    int n = A[0].size();
    if(i+1<m&&A[i+1][j]=='O')dfs(i+1,j,A);
    if(j+1<n&&A[i][j+1]=='O')dfs(i,j+1,A);
    if(i-1>=0&&A[i-1][j]=='O')dfs(i-1,j,A);
    if(j-1>=0&&A[i][j-1]=='O')dfs(i,j-1,A);
    
}

void Solution::solve(vector<vector<char> > &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
  //  vector<vector<bool>> visited(A.size(),vector<bool> (A[0].size()));
  if(A.size()==0)return ;
    for(int i=0;i<A[0].size();i++)
    {
        if(A[0][i]=='O')dfs(0,i,A);
        if(A[A.size()-1][i]=='O')dfs(A.size()-1,i,A);
    }
    for(int i=0;i<A.size();i++)
    {
        if(A[i][0]=='O')dfs(i,0,A);
        if(A[i][A[0].size()-1]=='O')dfs(i,A[0].size()-1,A);
    }
    for(int i=0;i<A.size();i++)
    {
        for(int j=0;j<A[0].size();j++)
        {
            if(A[i][j]=='O')A[i][j]='X';
            else if(A[i][j]=='$')A[i][j]='O';
        }
    }
}
