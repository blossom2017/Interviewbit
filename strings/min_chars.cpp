int Solution::solve(string A) {
   //  cout<<A.length();
    if(A.length()==1)return 0;
    int numchars;
    string rev;
    rev=A;
    std::reverse(rev.begin(),rev.end());
    string str;
    str=A+"$"+rev;
    vector<int > lps(str.length());
    lps[0]=0;
    int len=0;
    int i=1;
    while(i<str.length())
    {
        if(str[i]==str[len])
        {
            len++;
            lps[i]=len;
            i++;
        }
        else if(str[i]!=str[len]&&len==0)
        {
            lps[i]=0;
            i++;
        }
        else{
            len=lps[len-1];
        }
    }
    numchars=A.length()-lps.back();
    
    
    return numchars;
    
}
