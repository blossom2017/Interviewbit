vector<int> Solution::allFactors(int A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    
    
    long long int i=1;
    float x=sqrt(A);
    vector <int > sol;
    int j=0;
    while(i<=x)
    {
        if(A%i==0)
        {sol.push_back(i);
        if(i!=x)sol.push_back(A/i);
       // j+=2;
       }
        i++;
    }
    std::sort(sol.begin(),sol.end());
    return sol;
}
