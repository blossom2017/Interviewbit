string Solution::convertToTitle(int A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
vector <char> sol;
int i=0;
int x=A;
int l=0;
while(x>0)
{
    x=x/10;
    l++;
}
//cout<<l;
    while(A>0)
    {
        int rem=A%26;
        //cout<<rem;
        char ch;
        if(rem==0) ch='Z';
        
          else   ch='@'+rem;
     //  cout<<ch;
        sol.push_back(ch);
        
        //cout<<'A'+rem-1;
      if(rem!=0)  A=A/26;
      else A=A/26-1;
    }
    std::string s(sol.rbegin(),sol.rend());
  
  return s  ;
    
    
}
