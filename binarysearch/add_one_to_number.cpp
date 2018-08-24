vector<int> Solution::plusOne(vector<int> &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    int n1=A.size();
    //cout<<"size is"<<n1;
    
    if(n1>0)
    {
        vector <int>result(n1+1);
        result[0]=0;
    for (int i=1;i<=n1;i++)
    {
        result[i]=A[i-1];
        
    }
    
    
    for(int i=n1;i>=1;i--)
    {
        if(i==n1){
        if(result[i]+1==10)
        {result[i]=0;
        result[i-1]=result[i-1]+1;
        }
        else {result[i]=result[i]+1;}
        }
        else{
            if(result[i]==10)
            {
                result[i]=0;
                result[i-1]=result[i-1]+1;
                
            }
        }
        
    }
    for (int itr=0;itr<result.size();itr++)
    {
        //cout<<"entering if loop";
        if(result[itr]!=0)
        {
            
            break;
        }
        else {result[itr]=999;
        //cout<<"entering erase at "<<result[itr];
            
        }
    }
    result.erase(std::remove(result.begin(), result.end(), 999), result.end());
    return result;
    }
    else if(n1==0)
    {
        vector <int> result(1);
        result[0]=1;
        return result;
    }
    
    
}