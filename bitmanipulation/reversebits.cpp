unsigned int Solution::reverse(unsigned int A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
unsigned int retval=0;
int count=31;

    while(A>0)
    {
        unsigned int val=A&1;
      //  cout<<val;
        retval=retval+(val*pow(2,count));
        count--;
        A=A>>1;
        
    }
    return retval;
}
