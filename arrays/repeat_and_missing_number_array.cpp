vector<int> Solution::repeatedNumber(const vector<int> &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details

    int flag;
    vector < int>sol(2);
    long long int n1=A.size();
    long long int sum=n1*(n1+1)/2;
    long long int sumsq=n1*(n1+1)*(2*n1+1)/6;
    long long int sumact=0,sumsqact=0;
    for (int i=0;i<n1;i++)
    {
        sumact+=(long long)A[i];
        sumsqact+=(long long)A[i]*(long long)A[i];
        
    }
    long long int diff=sum-sumact;
    long long int diffsq=sumsq-sumsqact;
    long long int summ=(long long)diffsq/diff;
    long long int b=(long long)(diff+summ)/2;
    long long int a=summ-b;
    sol[0]=a;
    sol[1]=b;
    return sol;
    return sol;
}
