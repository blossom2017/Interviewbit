string Solution::simplifyPath(string A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details

    string str="/";
  //  str=std::reverse(A.begin(),A.end());
  
    
    stack < string> st;
    int i=0;
    string temp;
    while(i<A.length())
    {
         
        temp.clear();
        while(A[i]=='/')
        {
            i++;
        }
         while(i<A.length()&&A[i]!='/')
         {
             temp.push_back(A[i]);
            
             i++;
         }
        // cout<<temp<<endl;
         if(temp.compare("..")==0&& (!st.empty()))st.pop();
         else if(temp.compare(".")==0)continue;
         else if(temp.length()>0&&temp.compare("..")!=0)st.push(temp);
         
    }
    stack<string> reverse;
    while(!st.empty())
    {
        reverse.push(st.top());
        st.pop();
        
    }
    //string ans;
    while(!reverse.empty())
    {
        str.append(reverse.top()+'/');
        reverse.pop();
        
        
    }
    if(str.length()>1)
    {
    return str.substr(0,str.length()-1);}
    else return str;
    /*
    stack<string> st;
 
    // temporary string which stores the extracted
    // directory name or commands("." / "..")
    // Eg. "/a/b/../."
    // dir will contain "a", "b", "..", ".";
    string dir;
 
    // contains resultant simplifies string.
    string res;
 
    // every string starts from root directory.
    res.append("/");
 
    // stores length of input string.
    int len_A = A.length();
 
    for (int i = 0; i < len_A; i++) {
 
        // we will clear the temporary string
        // every time to accomodate new directory 
        // name or command.
        dir.clear();
 
        // skip all the multiple '/' Eg. "/////""
        while (A[i] == '/')
            i++;
 
        // stores directory's name("a", "b" etc.)
        // or commands("."/"..") into dir
        while (i < len_A && A[i] != '/') {
            dir.push_back(A[i]);
            i++;
        }
 
        // if dir has ".." just pop the topmost
        // element if the stack is not empty
        // otherwise ignore.
        if (dir.compare("..") == 0) {
            if (!st.empty()) 
                st.pop();            
        }
 
        // if dir has "." then simply continue
        // with the process.
        else if (dir.compare(".") == 0) 
            continue;
         
        // pushes if it encounters directory's 
        // name("a", "b").
        else if (dir.length() != 0) 
            st.push(dir);        
    }
 
    // a temporary stack  (st1) which will contain 
    // the reverse of original stack(st).
    stack<string> st1;
    while (!st.empty()) {
        st1.push(st.top());
        st.pop();
    }
 
    // the st1 will contain the actual res.
    while (!st1.empty()) {
        string temp = st1.top();
         
        // if it's the last element no need
        // to append "/"
        if (st1.size() != 1)
            res.append(temp + "/");
        else
            res.append(temp);
 
        st1.pop();
    }
 
    return res;
    */
    
}
