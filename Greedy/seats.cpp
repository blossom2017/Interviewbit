int Solution::seats(string A) {
    int count=0;
    int req;
    for(int i=0;i<A.length();i++)if(A[i]=='x')count++;
    if(count%2==0) req = count/2;
    else req = (count+1)/2;
    count=0;
    int k;
    for(k=0;k<A.length();k++)
    {
        if(A[k]=='x')count++;
        if(count==req)break;
    }
    int front = k-1;
    int back=k+1;
    int posf =k-1;
    int posb =k+1;
   long long int jumps=0;
   //cout<<k<<" ";
    while(front>=0)
    {
        if(A[front]=='x')
        {
            jumps+=(posf-front)%10000003;
            posf--;
        
        }
        front--;
    }
    while(back<A.length())
    {
        if(A[back]=='x')
        {
            jumps+=(back-posb)%10000003;
            posb++;
        }
        back++;
    }
    return jumps%10000003;
}
