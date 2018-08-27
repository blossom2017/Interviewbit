int Solution::candy(vector<int> &A) {
    vector<int> candies(A.size());
    int n = A.size();
    int sum=0;
    candies[0]=1;
    for(int i=1;i<A.size();i++)
    {
        if(A[i]>A[i-1])candies[i]=candies[i-1]+1;
        else candies[i]=1;
    }
    for(int i=n-2;i>=0;i--)
    {
        if(A[i]>A[i+1])candies[i]=max(candies[i],candies[i+1]+1);
    }
    for(int i=0;i<A.size();i++)sum+=candies[i];
    return sum;
}
