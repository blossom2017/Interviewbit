vector<int> Solution::twoSum(const vector<int> &A, int B) {
  map<int ,int > m;
  vector<int > solution;
    for(int i=0;i<A.size();i++)
    {
        if(m.find(B-A[i])!=m.end())
        {
            solution.push_back(m[B-A[i]]);
            solution.push_back(i+1);
            break;
        }
       else  if(m.find(A[i])==m.end())
       { m[A[i]]=i+1;
       }
    }
    return solution;
}
