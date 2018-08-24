string Solution::addBinary(string A, string B) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details

   long long int val1=0;
    long long int val2=0;
    int x=A.length()-1;
    int y=B.length()-1;
    string tempA,tempB;
    /*
    for(int i=0;i<A.length();i++)
    {
        if(A[i]!=' ')tempA.push_back(A[i]);
    }
    for(int i=0;i<B.length();i++)
    {
        if(B[i]!=' ')tempB.push_back(B[i]);
    }
    
    for(int i=tempA.length()-1;i>=0;i--)
    {
        if(tempA[i]=='1')val1+=pow(2,x-i);
        
    }
    
    for(int i=tempB.length()-1;i>=0;i--)
    {
        if(tempB[i]=='1')val2+=pow(2,y-i);
    }
    cout<<val1;
    cout<<val2;
  long long  int z=val1+val2;
    string str;
    str="";
    while(z>0)
    {
        int rem=z%2;
        char ch='0'+rem;
        str.push_back(ch);
        z=z/2;
        
    }
    std::reverse(str.begin(),str.end());
    */
    string str;
    std::reverse(A.begin(),A.end());
    std::reverse(B.begin(),B.end());
    for(int i=0;i<A.length();i++)
    {
        if(A[i]!=' ')tempA.push_back(A[i]);
    }
    for(int i=0;i<B.length();i++)
    {
        if(B[i]!=' ')tempB.push_back(B[i]);
    }
    
    int i=0,j=0;
    int c=0;
    char ch;
    //cout<<"before";
  //  cout<<tempA<<" "<<tempB<<" ";
    while(i<tempA.length() && i<tempB.length())
    {
        if(tempA[i]=='1'&&tempB[i]=='1'){
            //cout<<"case1";
            if(c==1)
            {
            
            str.push_back('1');
            c=1;}
            else {str.push_back('0');c=1;}
        }
        else if(tempA[i]!=tempB[i]&&c==0){//cout<<"cg";
        str.push_back('1');}
        else if(tempA[i]!=tempB[i]&&c==1){
        //    cout<<"cs";
            ch='0';
            str.push_back(ch);
            c=1;
            
        }
        else {ch=c+'0';str.push_back(ch);if(c==1)c=0;}
        i++;
    }
    if(i>=tempB.length())
    {
      //  cout<<"entering";
        while(i<tempA.length())
        {
            if(c==0)
            {
            str.push_back(tempA[i]);
            i++;}
            else if(c==1)
            {
            if(tempA[i]=='1'){str.push_back('0');c=1;}
            else {str.push_back('1');c=0;}
            
            i++;
            }
        }
    }
    else {
        //cout<<"ent";
        j=i;
        while(j<tempB.length())
        {
            if(c==0)
            {
            str.push_back(tempB[j]);
            j++;}
            else if(c==1)
            {
            if(tempB[j]=='1'){str.push_back('0');c=1;}
            else {str.push_back('1');c=0;}
            //c=~c;
            j++;
            }
        }
    }
    if(c==1)str.push_back('1');
   // cout<<" "<<str<<" ";
std::reverse(str.begin(),str.end());
    
    return str;
    

}
