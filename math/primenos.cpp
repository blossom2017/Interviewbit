vector<int> Solution::sieve(int A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details

    vector<int >primes(A+1);
    primes[0]=1;
    primes[1]=1;
    for(int i=0;i<=sqrt(A);i++)
    {
        if(primes[i]==0)
        {
        for(int j=2;i*j<=A;j++)
        {
            primes[i*j]=1;
        }}
    }
    vector <int> sol;
    for(int i=0;i<A;i++)
    {
        if(primes[i]==0)sol.push_back(i);
    }
    return sol;
}
