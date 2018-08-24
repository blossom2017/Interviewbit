void makezerorow(int index,vector<vector<int> > &A)
{
    for (int k=0;k<A[0].size();k++)
    {
        A[index][k]=0;
    }
}


void makezerocol(int index,vector<vector<int> > &A)
{
    for (int k=0;k<A.size();k++)
    {
        A[k][index]=0;
    }
}




void Solution::setZeroes(vector<vector<int> > &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more detai
    
    int row=A.size();
    vector<int> rowi;
    
    vector<int>coli;
    int col=A[0].size();
    for(int i=0;i<row;i++)
    {
        for (int j=0;j<col;j++)
        {
            // cout<<"entering fr";
             
            if(std::find(rowi.begin(), rowi.end(),i) == rowi.end()&&A[i][j]==0)
            {
              //  cout<<"entering";
                rowi.push_back(i);
            }
           if( std::find(coli.begin(), coli.end(), j) == coli.end()&&A[i][j]==0)
           {
               coli.push_back(j);
           }
        }
        
    }
    for(int i=0;i<rowi.size();i++)
    {
       //cout<<"entering";
       makezerorow(rowi[i],A);
    }
    for(int i=0;i<coli.size();i++)
    {
        makezerocol(coli[i],A);
    }
    
    
    
    
    
    
    
}

