int Solution::repeatedNumber(const vector<int> &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
int xor1=0,xor2=1;
for (int i=0;i<A.size();i++)
{
    xor1^=A[i];
}
int n=A.size();
for (int j=2;j<=A.size()-1;j++)
{
    xor2^=j;
}

    int result=xor1^xor2;
    return result;
    
    
    
}
