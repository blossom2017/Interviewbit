  bool isvalid(string s, string t)
{
    bool flag = true;
    for(int i=0;i<s.length();i++)
    {
        if(s[i]!=t[i]&&flag)flag = false;
        else if(s[i]!=t[i]&&!flag)return false;
        
    }
    return !flag;
}

/*
    while(!q.empty())
    {
        vector<string> front = q.front();
        q.pop();
        if(!ans.size()&&front.back()==end)
        {
            ans.push_back(front);
            minsize = front.size();
        }
        else if(ans.size()&&front.back()==end&&front.size()==minsize)
        {
            ans.push_back(front);
        }
        else if(ans.size()&&front.size()>=minsize)continue;
        string st = front.back();
        for(int i=0;i<mp[st].size();i++)
        {
            front.push_back(mp[st][i]);
            if(!visited.count(front))
            {
                q.push(front);
                visited.insert(front);
            }
            front.pop_back();
        }
    }
    */
vector<vector<string> > Solution::findLadders(string start, string end, vector<string> &dict) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details

    vector<vector<string>> ans;
    unordered_set<string> wordlist;
    map<string,vector<string>> mp;
    sort(dict.begin(),dict.end());
    dict.erase(unique(dict.begin(),dict.end()),dict.end());
    for(int i=0;i<dict.size();i++)
    {
        wordlist.insert(dict[i]);
        for(int j=i+1;j<dict.size();j++)
        {
            if(isvalid(dict[i],dict[j]))
            {
                mp[dict[i]].push_back(dict[j]);
                mp[dict[j]].push_back(dict[i]);
            }
        }
    }
    wordlist.insert(end);
    if(mp.find(start)==mp.end())
    {
         for(int j=0;j<dict.size();j++)
        {
            if(isvalid(start,dict[j]))
            {
                mp[start].push_back(dict[j]);
               
            }
        }
        
    }
     if(start==end)return {{start}};
    if(mp.find(end)==mp.end())return {};
   
    int minsize=INT_MAX;
    set<string> visited;

    queue<vector<string>> q;
    q.push({start});
   // visited.insert(start);
    int level =1;
    int minlevel= INT_MAX;
    while(!q.empty())
    {
       
        vector<string> front = q.front();
        q.pop();
        if(front.size()>level)
        {
            for(auto it = visited.begin();it!=visited.end();it++)wordlist.erase(*it);
            visited.clear();
            if(front.size()>minlevel)
            {
               // cout<<"yyyy";
                break;
            }
            level = front.size();
        }
        string last =front.back();
      //  cout<<last<<endl;
        
           // cout<<"bbbb";
            for(int i=0;i<mp[last].size();i++)
            {
               // cout<<mp[last][i]<<"ggg"<<endl;
                if(wordlist.count(mp[last][i]))
                {
                    front.push_back(mp[last][i]);
                    if(mp[last][i]==end)
                    {
                 //       cout<<"herefffff";
                        ans.push_back(front);
                        minlevel= level;
                    }
                    visited.insert(mp[last][i]);
                    q.push(front);
                    front.pop_back();
                }
            }
        
    }

    return ans;
  

}
