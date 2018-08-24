#include<algorithm>


void Solution::nextPermutation(vector<int> &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details

    
    int n=A.size();
    
    //vector <int> copy(n);
    //copy=A;
    int flagrev=1;
    int i,flag,pos,j,temp,slar;
    //std::sort(copy.rbegin(),copy.rend());
    
    std::reverse(A.begin(),A.end());
    if(std::is_sorted(A.begin(),A.end()))
    {
        return;
    }
    
    else
    {
      std::reverse(A.begin(),A.end());  
    
    
   /*int flaglast=1;
    for(i=0;i<=n-3;i++)
    {
        if(A[i]>A[i+1])
        {flaglast=0;
        break;
        }
        
    }
    if (flaglast==1)
    {
        temp=A[n-2];
        A[n-2]=A[n-1];
        A[n-1]=temp;
        return ;
    }
    
    
    
    for(i=0;i<n;i++)
    {
        flag =1;
        for(j=i+1;j<n;j++)
        {
            if(A[j]<A[i])
            {
               flag=0; 
                break;
            }
            
        }
        //swapA[i+1] if flag=1
        if(flag==1)
        {
            int slar=INT_MIN;
            for(int k=i+2;k<n;k++)
            {
            if(A[k]>A[j]&&A[k]<slar){
                slar=A[k];
                pos=k;
                
            }
            temp=A[i+1];
            A[i+1]=A[pos];
            A[pos]=temp;
            std::sort(A.begin()+pos,A.end());
            return ;
            }
        }
    }
    */
    if(A[n-1]>A[n-2])
    {
        temp=A[n-1];
        A[n-1]=A[n-2];
        A[n-2]=temp;
        return;
    }
    else
{    for(i=n-1;i>=0;i--)
    {
        if(A[i-1]<A[i])
        {
        slar=A[i];
        pos=i;
        for(j=i+1;j<=n-1;j++)
        {
             
            if(A[j]>A[i-1]&&A[j]<slar)
            {
                //small=1;
                slar=A[j];
                
                pos=j;
            
                
            }
            
        }  
        
        
        
        
            temp=A[i-1];
            A[i-1]=A[pos];
            A[pos]=temp;
           // cout<<"and"<<A[pos];
           std::reverse(A.begin()+i,A.end());
           /*
            int k=i;
            int end=n-1;
            while(k<=end)
            {
                //cout<<"entering while"<<A[pos+1];
                temp=A[k];
                A[k]=A[end];
                A[end]=temp;
                k++;
                end--;
                
            }*/
            
        //    std::sort(A+k,A+n);
            return;
        
        
        }}
        
        
        
        
        
        
        
    }
    return ;
    
    
    
      
    
}
}
