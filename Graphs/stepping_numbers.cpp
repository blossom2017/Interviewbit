vector<int> Solution::stepnum(int A, int B) {

    queue<int> q;
   
    for(int i=1;i<=9;i++)q.push(i);
    
 vector<int> sol;
  if(A==0)sol.push_back(0);
    while(!q.empty())
    {
        int front = q.front();
       // cout<<front<<" ";
        int last = front%10;
        q.pop();
        if(front>=A&&front<=B)sol.push_back(front);
         if(front<=B&&last-1>=0)q.push(front*10+last-1);
        if(front<=B&&last+1<=9)q.push(front*10+last+1);
       
    }
    
    return sol;
}
