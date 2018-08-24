long long int comb(int n,int r)
{
    
    if(r > n / 2) r = n - r; // because C(n, r) == C(n, n - r)
    long long ans = 1;
    int i;

    for(i = 1; i <= r; i++) {
        ans *= n - r + i;
        ans /= i;
    }

    return ans;

}




vector<int> Solution::getRow(int A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    vector <int> sol(A+1);
    
    
    for(int i=0;i<=A;i++)
    {
    long long int x=(long long )comb(A,i);
    sol[i]=x;
        
        }
        return sol;
    }
    
    
    


