int start(const vector<int> &A,int b,int fact)
{
    int low,high,mid;
    
     low=0;
    high=A.size()-1;
    int result=-1;
    while(low<=high)
    {
        mid=low+(high-low)/2;
        if(A[mid]==b&&fact==1)
        {
            result=mid;
            high=mid-1;
        }
        else if(A[mid]==b&&fact==0)
        {
            result=mid;
            low=mid+1;
        }
        else if(A[mid]>b)high=mid-1;
        else low=mid+1;
    }
    return result;
}



vector<int> Solution::searchRange(const vector<int> &A, int B) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    
    vector <int> solution(2);
    solution[0]=start(A,B,1);
    solution[1]=start(A,B,0);
    return solution;
    
    
}
