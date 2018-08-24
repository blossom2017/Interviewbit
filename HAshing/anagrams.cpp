
vector<vector<int> > Solution::anagrams(const vector<string> &A) {
    
    
    map<string  , vector <int >> m;
    
    for(int i=0;i<A.size();i++)
    {
        int size=A[i].length();
       // int value=0;
        string value=A[i];
        std::sort(value.begin(),value.end());
       
        if(m.find(value)!=m.end())m[value].push_back(i+1);
        else m[value].push_back(i+1);
    }
    
     vector<vector<int >> sol;
     
    auto it=m.begin();
    int count=0;
    while(it!=m.end())
    {
        sol.push_back(it->second);
        it++;
        count++;
    }
  //  cout<<count;
    
    return sol;
}
