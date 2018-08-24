int Solution::maxSubArray(const vector<int> &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    int n=A.size();
    //sum=A[0];
    int min=*std::min_element(A.begin(),A.end());
    //cout<<min;
    int max_end=INT_MIN,max_here=0;
    for (int i=0;i<n;i++)
    {
        max_here=max_here+A[i];
        if(max_end<max_here)max_end=max_here;
        //restarting the counting by making 0
       if(max_here<0)max_here=0;
        
    }
    return max_end;
    
}