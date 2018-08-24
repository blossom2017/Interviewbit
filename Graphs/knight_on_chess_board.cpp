int Solution::knight(int A, int B, int C, int D, int E, int F) {
    if(C<1||D<1||C>A||D>B||E<1||E>A||F<1||F>B)return -1;
    vector<vector<bool>> visited(A+1,vector<bool>(B+1));
    for(int i=0;i<visited.size();i++)
    {
        for(int j=0;j<visited[0].size();j++)visited[i][j]=false;
    }
    vector<vector<int>> level(A+1,vector<int>(B+1));
    queue<pair<int,int>> q;
    int x[8]={2,2,-2,-2,1,-1,1,-1};
    int y[8]={1,-1,1,-1,2,-2,-2,2};
    q.push({C,D});
    visited[C][D]=true;
    level[C][D]=0;
    while(!q.empty())
    {
        pair<int,int> f = q.front();
        q.pop();
        int xc = f.first;
        int yc = f.second;
        if(xc==E&&yc==F)return level[xc][yc];
        
        for(int i=0;i<8;i++)
        {
            if(xc+x[i]>=1&&xc+x[i]<=A&&yc+y[i]<=B&&yc+y[i]>=1&&!visited[xc+x[i]][yc+y[i]])
            {
                visited[xc+x[i]][yc+y[i]]=true;
                level[xc+x[i]][yc+y[i]]=level[xc][yc]+1;
                q.push({xc+x[i],yc+y[i]});
            }
        }
    }
    return -1;
}
