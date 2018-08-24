vector<vector<int> > Solution::diagonal(vector<vector<int> > &A) {
    int nrow=A.size();
    int ncol=nrow;
    int s=2*nrow-1;
    int i,j,k,l;
    vector<vector <int> >sol(s);
    for(i=0;i<ncol;i++)
    {
        vector<int >temp(i+1);
        for(j=i,k=0;j>=0;j--)
        {
            temp[k]=A[i-j][j];
            k++;
        }
        sol[i]=temp;
    }
    
    for(int m=1;m<nrow;m++)
    {
        
        vector<int>temp(nrow-m);
        for(j=m,l=0;j<=ncol-1;j++)
        {
            temp[l]=A[j][ncol-l-1];
            l++;
        }
        sol[i]=temp;
        i++;
    }
    return sol;
    
    
}
