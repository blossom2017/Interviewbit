int Solution::isValidSudoku(const vector<string> &A) {
    int c=A.size();
    int rows=A[0].size();
  //  unordered_set<int > rows;
    unordered_set<char> cols;
    
    for(int i=0;i<c;i++)
    {
        for(int j=0;j<c;j++)
        {
            if(cols.find(A[j][i])!=cols.end()){return 0;}
            else if(A[j][i]!='.') cols.insert(A[j][i]);
        }
        cols.clear();
    }
    cols.clear();
    for(int i=0;i<c;i++)
    {
        for(int j=0;j<c;j++)
        {
            if(cols.find(A[i][j])!=cols.end()){return 0;}
            else if(A[i][j]!='.')cols.insert(A[i][j]);
        }
        cols.clear();
    }
    cols.clear();
      int x=sqrt(c);
     // cout<<"hhh";
    for(int i=0;i<c-x+1;i+=x)
    {
        for(int j=0;j<c-x+1;j+=x)
        {
          

            for(int k=i;k<x+i;k++)
            {
                for(int z=j;z<x+j;z++)
                {
                    if(cols.find(A[k][z])!=cols.end())return 0;
                    else if(A[k][z]!='.')cols.insert(A[k][z]);
                }
            }
             cols.clear();
        }
   
    }
    return 1;
    
    
}
