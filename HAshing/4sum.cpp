vector<vector<int> > Solution::fourSum(vector<int> &A, int B) {

    map<int ,vector<int >> m;
    vector<vector<int> > solution;
    vector<int > ele(4);
    
    for(int i=0;i<A.size();i++)
    {
        for(int j=i+1;j<A.size();j++)
        {
            if(m.find(B-A[i]-A[j])==m.end())
            {
                //cout<<"not found";
                
                m[A[i]+A[j]].push_back(i);
                m[A[i]+A[j]].push_back(j);
               // cout<<A[i]+A[j]<<" "<<i<<" "<<j<<endl;
            }
            else {
                //cout<<"enteing else"<<i<<" "<<j;
                //cout<<B-A[i]-A[j];
                ele[0]=A[i];
                int index1=i;
                int index2=j;
                ele[1]=A[j];
              //  cout<<"size"<<m[B-(A[i]+A[j])].size();
                for(int i=0;i<=m[B-(A[index1]+A[index2])].size()-2;i=i+2)
                {
                    ele[2]=A[m[B-(A[index1]+A[index2])][i]];
                    ele[3]=A[m[B-(A[index1]+A[index2])][i+1]];
                   // cout<<"index"<<m[B-(A[index1]+A[index2])][i]<<" ";
                    //cout<<m[B-(A[index1]+A[index2])][i+1]<<" ";
                    if(m[B-(A[index1]+A[index2])][i]!=index1&&m[B-(A[index1]+A[index2])][i]!=index2&&m[B-(A[index1]+A[index2])][i+1]!=index1&&m[B-(A[index1]+A[index2])][i+1]!=index2)
                    {
                    //std::sort(ele.begin(),ele.end());
                    solution.push_back(ele);
                    }
                //    cout<<"valueo"<<i<<" "<<m[B-(A[index1]+A[index2])].size()<<endl;
                }
              m[A[i]+A[j]].push_back(index1);
               m[A[i]+A[j]].push_back(index2);
                
            }
        }
    }
    for(int i=0;i<solution.size();i++)
    {
        std::sort(solution[i].begin(),solution[i].end());
        
    }
    std::sort(solution.begin(),solution.end());
    int prev=0;
    vector<vector<int >> solc;
    if(solution.size()>0)
    {
    solc.push_back(solution[0]);
    
    for(int i=1;i<solution.size();i++)
    
    {
        if(solution[i]!=solution[prev]){solc.push_back(solution[i]);
        prev=i;}
    }}
 //  std::unique(solution.begin(),solution.end());
    return solc;
}
