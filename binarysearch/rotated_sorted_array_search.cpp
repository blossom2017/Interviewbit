int Solution::search(const vector<int> &A, int B) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
int n=A.size();
int low=0;
int high=n-1;
int mid;
int pivot,result=-1;

while(low<=high)
{
    if(A[low]<=A[high])
    {
        pivot=low;
        break;
    }
    else{
        mid=low+(high-low)/2;
        if(A[mid]<=A[(mid+1)%n]&&A[mid]<=A[(mid-1+n)%n])
        {
            pivot=mid;
            break;
        }
        else if(A[mid]<=A[high])high=mid-1;
        else low=mid+1;
    }
}
//cout<<pivot;
low=0;
high=n-1;
//cout<<high;
while(low<=high)
{
    mid=(high+low)/2;
    //cout<<mid;
    if(A[(mid+pivot)%n]==B)
    {result=(mid+pivot)%n;
    break;
    }
    else if(B>A[(mid+pivot)%n])
    {low=(mid+1);
    //cout<<low<<" ";
    }
    else 
    {high=(mid-1);
    //cout<<high<<" ";
    }
}
return result;
    
    
    
}
