int Solution::reverse(int A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
int x;
    if(A<0)x=-A;
    else x=A;
    int count=0;
    while(x>0)
    {
        x=x/10;
        count++;
        
    }
    count--;
    if(A>=0)x=A;
    else x=-A;
    int num=0;
    int i=0;
    while(x>0)
    {
        int rem=x%10;
       // cout<<"rem"<<rem;
        num+=rem*pow(10,count-i);
        i++;
        x=x/10;
    }
 if(A<0 &&num <0)return 0;
 else if(A<0 && num>0)return -num;
 else if(A>0 &&num<0) return 0;
 else return num;
}
