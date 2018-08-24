int max(int a,int b)
{
    if(a>b)return a;
    else return b;
}
int min(int a,int b)
{
    if(a<b)return a;
    else return b;
}
int Solution::trap(const vector<int> &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details

    vector< int > left(A.size());
    vector<int > right(A.size());
    left[0]=A[0];
    for(int i=0;i<A.size();i++)
    {left[i]=max(A[i],left[i-1]);
    
    }
    right[A.size()-1]=A[A.size()-1];
    
    for(int i=A.size()-2;i>=0;i--)
    right[i]=max(A[i],right[i+1]);
    int water=0;
    for(int i=0;i<A.size();i++)
    {
        water+=min(left[i],right[i])-A[i];
    }
    return water;
}
