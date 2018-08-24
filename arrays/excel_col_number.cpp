int Solution::titleToNumber(string A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    int sol=0;
    int l=A.length()-1;
    for(int i=0;i<=l;i++)
    {
        sol+=pow(26,l-i)*(A[i]-'A'+1);
        
    }
    return sol;
    
}
