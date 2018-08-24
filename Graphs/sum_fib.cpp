int Solution::fibsum(int A) {
    /*
    int i=1;
    int j = 1;
    vector<int> fib;
    vector<bool> visited(A+1,false);
    fib.push_back(i);
    fib.push_back(j);
    int num = i+j;
    while(num<=A)
    {
        int back = fib.back();
        fib.push_back(num);
        num+=back;
    }
    queue<pair<int,int>> q;
    for(int i=fib.size()-1;i>=0;i--)
    {
        q.push({fib[i],1});
        visited[fib[i]]=true;
    }
    
    while(!q.empty())
    {
        pair<int,int> f = q.front();
        q.pop();
        if(f.first==A)return f.second;
        for(int i=fib.size()-1;i>=0;i--)
        {
            if(f.first+fib[i]<=A&&!visited[f.first+fib[i]])
            {
                q.push({f.first+fib[i],f.second+1});
                visited[f.first+fib[i]]=true;
            }
        }
    }
    */
     int i=1;
    int j = 1;
    vector<int> fib;
    fib.push_back(i);
    fib.push_back(j);
    int num = i+j;
    while(num<=A)
    {
        int back = fib.back();
        fib.push_back(num);
        num+=back;
    }
     j = fib.size()-1;
    int steps=0;
    while(A>0)
    {
       // cout<<A<<" ";
        if(A>=fib[j])
        {
            A=A-fib[j];
            steps++;
        }
        else j--;
    }
    
    return steps;
}
