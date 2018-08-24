#include<list>

int dfs(int u,list<int> *adj,int &maxlevel)
{
 
    if(adj[u].size()==0)
    {
        maxlevel=max(maxlevel,1);
        return 1;
    }
    int m1=0,m2=0;
    for(auto i=adj[u].begin();i!=adj[u].end();i++)
    {
        int x = dfs(*i,adj,maxlevel);
        if(x>m1)
        {
            m2=m1;
            m1=x;
        }
        else if(x>m2)
        {
            m2=x;
        }
    }
    maxlevel = max(maxlevel,m2+1);
    maxlevel = max(maxlevel,m1+1);
    maxlevel = max(maxlevel,m2+m1+1);
    return 1+m1;
}


int Solution::solve(vector<int> &A) {
    list<int>* adj = new list<int> [A.size()];
    int start;
    for(int i=0;i<A.size();i++)
    {
        int u = i;
        int v = A[i];
        if(v!=-1)
            adj[v].push_back(u);
        
        else start = i;
    }

    int maxlevel = 0;
    int level = dfs(start,adj,maxlevel);
 return maxlevel-1;
   
}
