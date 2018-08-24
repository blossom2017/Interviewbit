
string Solution::countAndSay(int A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details

    int i=1;
    string s="1";
    if(A==1)return "1";
    string temp;
     
    while(i<A)
    {
       char ch=s[0];
        int count=1;
        int j=0;
        temp="";
        while(j<s.size())
        {
            char next=s[j+1];
            if(s[j+1]&&s[j+1]==ch)count++;
            else {
                
                    temp+=count+'0';
                    temp+=ch;
                    ch=s[j+1];
                    count=1;
                
            }
            j++;
        }
        s=temp;
        i++;
    }
    return s;
    
}
