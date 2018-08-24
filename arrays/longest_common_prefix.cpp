string Solution::longestCommonPrefix(vector<string> &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details

    
    
    string sol;
    int i=0;
    while(i<A[0].length())
    {
        char ch=A[0][i];
        //cout<<ch;
        int flag=0;
        for(int j=1;j<A.size();j++)
        {
            if(i<=A[j].length()-1&&A[j][i]!=ch)
            {
                flag=1;
                break;
            }
            else if(i>A[j].length()-1)flag=1;
        }
        if(flag==0)sol.push_back(ch);
        i++;
        
    }
    return sol;
}
