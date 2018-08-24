vector<int> Solution::prevSmaller(vector<int> &A) {
    
    vector<int > solution(A.size());
    stack<int > s1;
    stack<int > s2;
    for(int i=0;i<A.size();i++)
    {
        if(s1.empty())
        {
            //cout<<"entering";
            solution[i]=-1;
        s1.push(A[i]);
        }
        else{
          //  cout<<"here";
            int flag=0;
            while(!s1.empty())
            {
               // s2.push(s1.top());
                 if(s1.top()<A[i]){solution[i]=s1.top();flag=1; break;}
              else  s1.pop();
               
                
            }
            if(flag==0)solution[i]=-1;
         /*   while(!s2.empty())
            {
                s1.push(s2.top());
                s2.pop();
            }
        */    
            s1.push(A[i]);
        }
    }
    return solution;
}
