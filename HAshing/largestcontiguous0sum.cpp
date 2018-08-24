vector<int> Solution::lszero(vector<int> &A) {
    unordered_map<int ,vector<int> > m;
    vector<int > sol;
    int sum=0;
    m[0].push_back(-1);
    for(int i=0;i<A.size();i++)
    {
        sum+=A[i];
        if(m.find(sum)!=m.end()){//cout<<i<<" ";
        m[sum].push_back(i);}
        else m[sum].push_back(i);
    }
    auto it=m.begin();
    int max=-1;
    int start=0;
    int end=0;
    while(it!=m.end())
    {
        if(it->second.size()>1)
        {
           int st=it->second[0];
          // cout<<st;
            for(int i=1;i<it->second.size();i++)
            {
                if(it->second[i]-st>max||it->second[i]-st==max&&st<start)
                {
                start=st;
                end=it->second[i];
                max=end-start;
              //  cout<<"max"<<max<<" ";
                }
            }
        }
        it++;
    }
    for(int i=start+1;i<=end;i++)
    {
        sol.push_back(A[i]);
    }
return sol;
    
}
