bool Solution::isPower(int A) {

    long long int sq=sqrt(A);
    vector <int> fact;
    int x=2;
    if(A==1)return true;
    
    while(x<=sq)
    {
        for(int y=2;y<A&&pow(x,y)<=A;y++)
        {
            if(pow(x,y)==A)
            {
                return true;
            }
        }
        x++;
    }
    return false;
}
