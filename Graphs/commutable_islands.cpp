#include<list>
struct compare
{
  bool operator()(pair<int,int> a,pair<int,int> b)
{
    //minheap
    return a.first>b.first;
}
};

int Solution::solve(int n, vector<vector<int> > &edges) {
    //mst
   vector<map<int,int>> adj(n+1);
    int u,v,w;
    for(int i=0;i<edges.size();i++)
    {
        u=edges[i][0];
        v=edges[i][1];
        w=edges[i][2];
        adj[u][v]=w;
        adj[v][u]=w;
    }
    vector<int> key(n+1,INT_MAX);
    vector<bool> mstset(n+1,false);
    priority_queue<pair<int,int>,vector<pair<int,int>>, compare> pq;
    pq.push({0,1});
    
    key[1]=0;
    vector<int> parent(n+1);
    while(!pq.empty())
    {
        u = pq.top().second;
        pq.pop();
        mstset[u]=true;
        for(auto it = adj[u].begin();it!=adj[u].end();it++)
        {
            v=it->first;
            w=it->second;
            if(!mstset[v]&&key[v]>w)
            {
                key[v]=w;
                pq.push({key[v],v});
                parent[v]=u;
            }
        }
    }
    int sum = 0;
    for(int i=2;i<=n;i++)sum+=adj[i][parent[i]];
    return sum;
    
}
