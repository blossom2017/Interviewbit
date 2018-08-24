int Solution::diffPossible(const vector<int> &A, int B) {
    if(B==0)
    {
        unordered_set<int > s;
        for(int i=0;i<A.size();i++)
        {
            if(s.find(A[i])!=s.end())return 1;
            else s.insert(A[i]);
        }
        return 0;
    }
    unordered_set<int > s;
    for(int i=0;i<A.size();i++)
    {
        s.insert(A[i]);
    }
    int flag=0;
    for(int i=0;i<A.size();i++)
    {
        if(s.find(B+A[i])!=s.end())
        {
            flag=1;
            break;
        }
    }
    return flag;
}
