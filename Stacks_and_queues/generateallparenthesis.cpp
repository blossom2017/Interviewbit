int Solution::isValid(string A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
stack<char> st;
    int i=0;
    int l=A.length();
    while(i<l)
    {
        if(A[i]=='('||A[i]=='['||A[i]=='{')
        {
            st.push(A[i]);
        }
        else if (st.size()>0){char ele=st.top();
        st.pop();
        if(ele!='('&&A[i]==')'||ele!='['&&A[i]==']' ||ele!='{'&&A[i]=='}')return 0;
        }
        else return 0;
        i++;
    }
    if(st.size()==0)return 1;
    else return 0;
}
