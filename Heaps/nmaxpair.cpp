struct compare
{
  bool operator()(vector<int> a,vector<int> b)
  {
      return a[0]<b[0];
  }
};
vector<int> Solution::solve(vector<int> &A, vector<int> &B) {
    

   vector<int> sol;
   priority_queue<vector<int> ,vector<vector<int>>,compare> pq;
    /*
    Brute force
     priority_queue<pair<int,int>> pq;
     
    for(int i=0;i<A.size();i++)
    {
        for(int j=0;j<B.size();j++)pq.push(A[i]+B[j]);
    }
   
    for(int k=0;k<A.size()&&!pq.empty();k++)
    {
        sol.push_back(pq.top());
        pq.pop();
    }
    */
    int n = A.size();
    if(n==0) return sol;
    sort(A.begin(),A.end());
    sort(B.begin(),B.end());
    set<pair<int,int>> s;
    pq.push({A[n-1]+B[n-1],n-1,n-1});
   s.insert({n-1,n-1});
    for(int i=0;i<n&&!pq.empty();i++)
    {
        vector<int> p1 = pq.top(); pq.pop();
       
        sol.push_back(p1[0]);
        int i1 = p1[1];
        int i2 = p1[2];
        
        if(i1-1>=0&&s.find({i1-1,i2})==s.end())
        {
            pq.push({A[i1-1]+B[i2],i1-1,i2});
            s.insert({i1-1,i2});
        }
        if(i2-1>=0&&!s.count({i1,i2-1}))
        {
            pq.push({A[i1]+B[i2-1],i1,i2-1});
            s.insert({i1,i2-1});
        }
    }
    return sol;
    
   
}
