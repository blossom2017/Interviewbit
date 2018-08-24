int Solution::isPrime(int A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details

    int sol=1;
    float x=sqrt(A);
    if(A==1)return 0;
    int  i=1;
   // cout<<A%1631<<" ";
    while(i<=x)
    {
      long long   int y =A%i;
        if((y== 0 )&& (i!=1) ){sol=0;break;}
        i++;
    }
    
    return sol;
    
}
