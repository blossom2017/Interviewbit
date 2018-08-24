int Solution::firstMissingPositive(vector<int> &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    
    
    
    long int n=A.size();
    //do segregation
    int j=0,i=0;
    for(i=0;i<n;i++)
    {
        if(A[i]< 0)
        {
          int   temp=A[i];
     //    cout<<temp<<endl;   
         A[i]=A[j];
            A[j]=temp;
            j++;
        }
    }
  //  cout<<j;
  int flag=0;
//  cout<<n;
  long int k;
  int count=0;
    for( k=j;k<n;k++)
    {
        
        //cout<<A[k]<<" ";
        //count++;
        if(abs(A[k])+j-1<n&&A[abs(A[k])-1+j]>0)
        {
            
           // cout<<"inside";
            A[abs(A[k])+j-1]= -1*A[abs(A[k])-1+j];
            //flag=1;
        }
    }
    
    // cout<<k<<" "<<count;
    for(int i=j;i<n;i++)
    {
        if(A[i]>0)
        {
           // cout<<i;
            return i+1-j;
        break;
        }
    }
  //cout<<"here";
   if(j==n)return 1;
    else  return n+1;
}
