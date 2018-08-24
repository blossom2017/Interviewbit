int Solution::uniquePaths(int A, int B) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details

    if(A==1||B==1)return 1;
    else return (uniquePaths(A-1,B)+uniquePaths(A,B-1));
    
}
