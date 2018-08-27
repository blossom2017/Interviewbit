vector<int> Solution::dNums(vector<int> &A, int B) {
    map<int,int> mp;
    
    vector<int> soln;
    for(int i=0;i<B;i++)if(mp.find(A[i])==mp.end())mp[A[i]]=1;
    else mp[A[i]]++;
    soln.push_back(mp.size());
    
    for(int i=0;i<A.size()-B;i++)
    {
        int end = i+B;
        mp[A[i]]--;
        if(mp[A[i]]==0)mp.erase(A[i]);
      if(mp.find(A[end])==mp.end())mp[A[end]]=1;
    else mp[A[end]]++;
    soln.push_back(mp.size());
    }
    return soln;
}
