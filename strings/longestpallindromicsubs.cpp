string Solution::longestPalindrome(string A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details

    int n=A.length();
    /*
    vector<vector<int> > arr(n,vector<int > (n));
    for(int i=0;i<n;i++)
    {
        arr[i][i]=1;
    }
    int max=1;
    int start=0;
    int end=0;
    for(int i=0;i+1<n;i++)
    {
        if(A[i]==A[i+1]){arr[i][i+1]=1;max=2;start=i;end=i+1;}
        else arr[i][i+1]=0;
    }
    for(int k=3;k<=n;k++)
    {
        for(int i=0;i<n-k+1;i++)
        {
            int j=i+k-1;
            if(arr[i+1][j-1]==1&&A[i]==A[j]){arr[i][j]=1;if(k>max){max=k;start=i;end=j;}}
            else arr[i][j]=0;
        }
    }
    */
    int start=0;
    int max=1;
    for(int i=1;i<n;i++)
    {
        int low=i-1;
        int high=i;
        while(low>=0&&high<n&&A[low]==A[high])
        {
            if(high-low+1>max){max=high-low+1;start=low;}
            low--;
            high++;
        }
         low=i-1;
         high=i+1;
        while(low>=0&&high<n&&A[low]==A[high])
        {
            if(high-low+1>max){max=high-low+1;start=low;}
            low--;
            high++;
        }
    }
    string str=A.substr(start,max);
    return str;
    
}
