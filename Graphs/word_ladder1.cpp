#include<list>

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




int Solution::ladderLength(string start, string end, vector<string> &d) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    
    int n = d.size();
  
    if(d.size()==0)return 0;
     list<int> * adj ;
    if(find(d.begin(),d.end(),end)==d.end())return 0;
    if(find(d.begin(),d.end(),start)==d.end())
   adj = new list<int> [n+1];
    else  adj = new list<int> [n];
    
    for(int i=0;i<d.size();i++)
    {
        if(adj->size()==n+1)
        {
            if(isvalid(d[i],start))
            {
                adj[n].push_back(i);
            }
        }
        for(int j=i+1;j<d.size();j++)
        {
            if(isvalid(d[i],d[j]))
            {
                adj[i].push_back(j);
                adj[j].push_back(i);
            }
        }
    }
    int index = n;
    if(find(d.begin(),d.end(),start)!=d.end())index = find(d.begin(),d.end(),start)-d.begin();
    vector<bool> visited(n+1,false);
    vector<int> level(n+1,1);
    queue<int> q;
    q.push(index);
    visited[index]=true;
    
    while(!q.empty())
    {
        int front = q.front();
        q.pop();
        if(front<n&&d[front]==end)return level[front];
        for(auto it = adj[front].begin();it!=adj[front].end();it++)
        {
            if(!visited[*it])
            {
                visited[*it]=true;
                level[*it]=level[front]+1;
                q.push(*it);
            }
        }
    }
    
    return 0;
    
    
    
}
