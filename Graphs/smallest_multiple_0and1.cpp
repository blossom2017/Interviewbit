string Solution::multiple(int A) {
    long long int st =1;
    queue<long long int> q;
   q.push(st);
   set<int> s;
 
    while(!q.empty())
    {
       
        int front= q.front();
    
        q.pop();
       //  cout<<front<<" ";
       long long int x= front%A;
        if(x==0)return to_string(front);
        
       
       if(!s.count((front*10)%A)) q.push((long long int)front*10);
       if(!s.count((front*10+1)%A)) q.push((long long int)front*10+1);
        
    }
    return "";
}
