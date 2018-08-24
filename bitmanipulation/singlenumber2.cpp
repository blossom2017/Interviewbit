int Solution::singleNumber(const vector<int> &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
int result=0;
int count=31;
int x;
int val;

    for(int i=0;i<32;i++)
    {
        int sum=0;
        x=(1<<i);
        for(int j=0;j<A.size();j++)
        {
             val=A[j]&x;
            if(val)sum++;
        }
    //    cout<<sum;
      //   cout<<endl;
        if(sum%3)result=result|x;
    }
   
    return result;
}
