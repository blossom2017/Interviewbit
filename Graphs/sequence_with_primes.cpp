  struct compare{
    bool operator()(pair<int,int> a,pair<int,int> b)
    {
        //min
        return a.first>b.first;
    }
  };

vector<int> Solution::solve(int A, int B, int C, int k) {
    vector<int> soln;
    if(k==0)return soln;
    vector<int> v(3);
    v[0]=A;
    v[1]=B;
    v[2]=C;
    sort(v.begin(),v.end());
priority_queue<pair<int,int>, vector<pair<int,int>> , compare> pq;
pq.push({A,A});
pq.push({B,B});
pq.push({C,C});
    while(!pq.empty())
    {
     pair<int,int> f = pq.top();
     pq.pop();
     if(soln.size()>0&&f.first==soln.back())continue;
     soln.push_back(f.first);
     if(soln.size()==k)return soln;
     
   
     if(f.second==v[0])
     {
         pq.push({f.first*f.second,f.second});
         pq.push({f.first*v[1],f.second});
         pq.push({f.first*v[2],f.second});
     }
     else 
     {
         if(f.second == v[1])
         {
             pq.push({f.first*v[1],v[1]});
             pq.push({f.first*v[2],v[1]});
         }
         else 
         {
             pq.push({f.first*v[2],v[2]});
         }
     }
     
    }
    return soln;
}
