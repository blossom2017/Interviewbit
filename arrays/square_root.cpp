#include<cmath>



int Solution::sqrt(int A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    
    int x=A;
    if (x == 0 || x == 1) 
       return x;
 
    // Do Binary Search for floor(sqrt(x))
    long long int start = 1, end = x/2, ans;   
    while (start <= end) 
    {        
       long long  int mid = start + (end-start) / 2;
 
        // If x is a perfect square
        if (mid*mid == x)
            return mid;
 
        // Since we need floor, we update answer when mid*mid is 
        // smaller than x, and move closer to sqrt(x)
        if (mid*mid < x) 
        {
            start = mid + 1;
            ans = mid;
        } 
        else // If mid*mid is greater than x
            end = mid - 1;        
    }
    return ans;
     //return pow(2,comp/2)-1;
     
     //return(pow(2,req));
}
