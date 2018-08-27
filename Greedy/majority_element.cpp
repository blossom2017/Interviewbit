int Solution::majorityElement(const vector<int> &A) {
    int a,b;
    int ca,cb;
    int n = A.size();
    if(A.size()==1)return A[0];
    int count =0;
    for(int i=0;i<A.size();i++)
    {
        if(!count)
        {
            a=A[i];
            count=1;
        }
        else if(A[i]==a)count++;
        else count--;
            
            
    }
    return a;
    
}
