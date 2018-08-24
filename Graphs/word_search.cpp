bool dfs(vector<string> A,string path,string B,int i,int j,int index)
{
    if(A[i][j]==B[index])  path.push_back(A[i][j]);
    else return false;
    if(path==B)return true;
    if(path.length()>=B.length())return false;
  
    if(i+1<A.size()&&dfs(A,path,B,i+1,j,index+1))return true;
    if(i-1>=0&&dfs(A,path,B,i-1,j,index+1))return true;
     if(j-1>=0&&dfs(A,path,B,i,j-1,index+1))return true;
     if(j+1<A[0].size()&&dfs(A,path,B,i,j+1,index+1))return true;

    return false;
}

int Solution::exist(vector<string> &A, string B) {
    if(B.length()==0)return true;
    for(int i=0;i<A.size();i++)
    {
        for(int j=0;j<A[0].size();j++)if(A[i][j]==B[0]&&dfs(A,"",B,i,j,0))return true;
    }
    return false;

    
}
