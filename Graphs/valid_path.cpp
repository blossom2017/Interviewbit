bool isvalid(int i, int j, int x,int y, vector<int>E, vector<int> F,int r)
{
    if(i<0||j<0||i>x||j>y)return false;
    for(int k=0;k<F.size();k++)
    {
        float dist = sqrt((i-E[k])*(i-E[k])+(j-F[k])*(j-F[k]));
        if(dist<=r)return false;
    }
    return true;
}

string Solution::solve(int x, int y, int C, int r, vector<int> &E, vector<int> &F) {

    queue<pair<int,int>> q;
    if(!isvalid(0,0,x,y,E,F,r))return "NO";
    q.push({0,0});
    int nextx[8] = {1,-1,0,0,1,-1,-1,1};
    int nexty[8] = {0,0,1,-1,1,-1,1,-1};
    vector<vector<bool>> visited(x+1,vector<bool> (y+1));
    visited[0][0]=true;
    while(!q.empty())
    {
        pair<int,int> front = q.front();
        q.pop();
        int a = front.first;
        int b = front.second;
        if(a==x&&y==b)return "YES";
        for(int i=0;i<8;i++)
        {
            if(isvalid(a+nextx[i],b+nexty[i],x,y,E,F,r)&&!visited[a+nextx[i]][b+nexty[i]])
            {
                q.push({a+nextx[i],b+nexty[i]});
                visited[a+nextx[i]][b+nexty[i]]=true;
            }
        }
        
    }
    return "NO";
}
