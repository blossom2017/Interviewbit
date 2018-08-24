void dfs(int i,int j, vector<vector<bool>>& visited, vector<string> A)
{
  //  cout<<i<<" "<<j<<" ";
    visited[i][j]=true;
    int m = A.size();
    int n = A[0].size();
    if(i+1<m&&A[i+1][j]=='X'&&!visited[i+1][j])dfs(i+1,j,visited,A);
    if(i-1>=0&&A[i-1][j]=='X'&&!visited[i-1][j])dfs(i-1,j,visited,A);
    if(j+1<n&&A[i][j+1]=='X'&&!visited[i][j+1])dfs(i,j+1,visited,A);
    if(j-1>=0&&A[i][j-1]=='X'&&!visited[i][j-1])dfs(i,j-1,visited,A);
}

int Solution::black(vector<string> &A) {
    int count=0;
    vector<vector<bool>> visited(A.size(),vector<bool>(A[0].size()));
    for(int i=0;i<A.size();i++)
    {
        for(int j=0;j<A[0].size();j++)visited[i][j]=false;
    }
    for(int i=0;i<A.size();i++)
    {
        for(int j=0;j<A[0].size();j++)
        {
            if(!visited[i][j]&&A[i][j]=='X')
            {
                count++;
                dfs(i,j,visited,A);
            }
        }
    }
    return count;
}
