int Solution::nchoc(int A, vector<int> &B) {
   long long int nc=0;
    priority_queue<int> pq;
    
    for(int i=0;i<B.size();i++)pq.push(B[i]);
    for(int i=0;i<A&&!pq.empty();i++)
    {
        
        int top = pq.top();
        pq.pop();
      //  cout<<top<<" ";
        nc+=(top%1000000007);
        pq.push(top/2);
    }
    return nc%1000000007;
}
