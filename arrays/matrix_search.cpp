int Solution::searchMatrix(vector<vector<int> > &A, int B) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details

    int ncol=A[0].size();
    int nrow=A.size();
    int rownum,colnum;
    int low,mid,high;
     low=0;
     high=(nrow-1)*ncol+(ncol-1);
    int result=0;
    
    while(low<=high)
    {
        mid=low+(high-low)/2;
        int coli=mid%ncol;
        int rowi=(mid-coli)/ncol;
        if(A[rowi][coli]==B)
        {
            result=1;
            break;
        }
        else if(B<A[rowi][coli])high=mid-1;
        else low=mid+1;
    }
   return result; 
}
