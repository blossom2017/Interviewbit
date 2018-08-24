int Binarysearch(const vector <int > &A,int B,int c)
{
    int low=0,high=A.size()-1;
    
    int result=-1;
    while(low<=high)
    {
        int mid=low +(high-low)/2;
        if(A[mid]==B)
        {
            result=mid;
            if(c==1)
            {
                high=mid-1;
            }
            else low=mid+1;
        }
        else if(B>A[mid])low=mid+1;
        else high=mid-1;
    }
    return result;
}





int Solution::findCount(const vector<int> &A, int B) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    int firstindex=Binarysearch(A,B,1);
    int lastindex=Binarysearch(A,B,0);
    if(firstindex==-1||lastindex==-1)
    return 0;
    
    else return lastindex-firstindex+1;
    
}
