void Solution::rotate(vector<vector<int> > &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    int temp;
    int r=0;
    int c=A.size()-1;
    for(r=0;r<=A.size()/2;r++)
    {
        int y=c-r;
        for(int i=r;i<y;i++)
        {
            int x=c-i;
         int  temp=A[r][i];
            A[r][i]=A[x][r];
            A[x][r]=A[y][x];
            A[y][x]=A[i][y];
            A[i][y]=temp;
            
        }   
        
    }
    
    
    
    
    
    
}

