int Solution::trailingZeroes(int A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
int x=5;
int count=0;
   while(x<=A)
   {
       count+=A/x;
       x*=5;
   }
   return count;
}