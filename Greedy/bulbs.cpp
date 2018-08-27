int Solution::bulbs(vector<int> &A) {

    int ng =0;
  if(A.size()==0)return 0;
    int i=0;
    int start =0;
    int sg=A[0];
    while(i<A.size())
    {
     if(A[i]==A[start])i++;
     else 
     {
         
         
             start = i;
             i++;
             ng++;
         
         
     }
    }
    ng++;
    if(sg==1)return ng-1;
    else return ng;
}
