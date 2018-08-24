#include<algorithm>
#include<string>
#include<cstring>


bool Solution::isPalindrome(int A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details

    string str=std::to_string (A);
   // cout<<str;
   string str2(str.rbegin(),str.rend());
  //cout<<" "<<str2; 
    if(str.compare(str2)==0)return true ;
    else return false;
    //return true;
}
