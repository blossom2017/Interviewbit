int Solution::findMinXor(vector<int> &A) {
    int val,min=INT_MAX;
    /*
    for(int i=0;i<A.size();i++)
    {
        for(int j=i+1;j<A.size();j++)
        {
            val=A[i]^A[j];
            if(val<min)min=val;
        }
    }
    */
    std::sort(A.begin(),A.end());
    for(int i=0;i+1<A.size();i++)
    {
        val=A[i]^A[i+1];
        if(val<min)min=val;
    }
    return min;
}
