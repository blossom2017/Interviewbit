int Solution::braces(string A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details

    int i=0;
    int flag=0;
    char check;
    stack<char> st;
    while(i<A.length())
    {
        if(A[i]!=')')
        {if(A[i]=='(')flag=1;
        st.push(A[i]);
        i++;}
        else {
            if(st.size()<4)return 1;
            else {
               check=st.top();if(check=='(')return 1; else  st.pop();
               check=st.top();if(check=='(')return 1; else  st.pop();
             check=st.top();if(check=='(')return 1; else  st.pop();
             check=st.top();if(check!='(')return 1; else  st.pop();
                 st.push('x'); 
            }
            
            i++;
        }
    }
while(st.size()>0)
{
char ele=    st.top();
if(ele=='('||ele==')')return 1;
    st.pop();
    
}
return 0;
    
}
