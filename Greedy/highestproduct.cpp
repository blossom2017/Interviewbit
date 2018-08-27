int Solution::maxp3(vector<int> &A) {
    sort(A.begin(),A.end());
    int n= A.size();
    if(A.size()<3)return 0;
    if(A[0]>=0)return A[n-1]*A[n-2]*A[n-3];
    return max(A[n-1]*A[n-2]*A[n-3],A[0]*A[1]*A[n-1]);
}
