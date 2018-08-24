int Solution::searchInsert(vector<int> &A, int B) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
int n=A.size();
int high=n-1;
int low=0;
int mid;
while(low<=high)
{
    mid=low+(high-low)/2;
    if(A[mid]==B)return mid;
    else if(A[mid]>B)high=mid-1;
    else low=mid+1;
}
if(low>=n-1)return n;
else return low;
    
    
    
    
}
