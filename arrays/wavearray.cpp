vector<int> Solution::wave(vector<int> &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    
    int n1=A.size();
    vector <int> sol(n1);
    std::sort(A.begin(),A.end());
    int i=0,j=1,k=0;
    while(i<n1||j<n1)
    {
    
        sol[k]=A[j];
        sol[k+1]=A[i];
        k+=2;
        j+=2;
        i+=2;
        
    }
    k=k-2;

    
    if(n1%2==0)
    {
    sol[k]=A[j-2];
    
    }
    else{sol[k]=A[i-2];
    }
    //j=j-2;
    //i=i-2;
    //if(i)
    return sol;
}
