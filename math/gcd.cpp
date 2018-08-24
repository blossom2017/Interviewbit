int Solution::gcd(int A, int B) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
if(A==B)return A;
else if(A==0)return B;
else if(B==0)return A;
while(A!=B)
{
    if(A>B)A=A-B;
    else B=B-A;
}
return A;
}
