#include<sstream>

int Solution::evalRPN(vector<string> &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details

    stack<int > st;
    //use stoi function
    for(int i=0;i<A.size();i++)
    {
        if(A[i].compare("/")!=0&&A[i].compare("*")!=0&&A[i].compare("+")!=0&&A[i].compare("-")!=0)
        {
            int x=0;
            stringstream geek(A[i]);
            geek >> x;
           // cout<<x<<" ";
            st.push(x);
            
        }    
        else if(A[i].compare("/")==0){
            int ele1=st.top();
            st.pop();
            int ele2=st.top();
            st.pop();
            int res=ele2/ele1;
            st.push(res);
        }
        else if(A[i].compare("*")==0)
        {
           int ele1=st.top();
            st.pop();
            int ele2=st.top();
            st.pop();
            int res=ele2*ele1;
            st.push(res);
        }
        else if(A[i].compare("+")==0)
        {
             int ele1=st.top();
            st.pop();
            int ele2=st.top();
            st.pop();
            int res=ele2+ele1;
            st.push(res);
        }
        else if(A[i].compare("-")==0)
        {
             int ele1=st.top();
            st.pop();
            int ele2=st.top();
            st.pop();
            int res=ele2-ele1;
            st.push(res);
        }
        
    }
    return st.top();
}
