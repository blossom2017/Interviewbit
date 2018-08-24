string Solution::reverseString(string A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified

    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
if(A.length()==0||A.length()==1)return A;
string str;
  stack<char> st;
    int i=0;
while(i<A.length())
{
    st.push(A[i]);
    i++;
}
while(st.size()>0)
{
    str.push_back(st.top());
    st.pop();
}
return str;
    
}
