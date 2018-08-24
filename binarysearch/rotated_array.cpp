int Solution::findMin(const vector<int> &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    int low=0;
    int high=A.size()-1;
    int n=A.size();
    while(low<=high)
    {
        if(A[low]<=A[high])return A[low];
    else{
        int mid=low+(high-low)/2;
        if(A[mid]<=A[(mid+1)%n]&&A[mid]<=A[(mid-1+n)%n])return A[mid];
        else if(A[mid]<=A[high])high=mid-1;
        else if(A[mid]>=A[high])low=mid+1;
    }
    }
    
    
    
    
}
