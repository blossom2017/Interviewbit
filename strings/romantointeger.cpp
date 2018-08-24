int Solution::romanToInt(string A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
int i=0;
int sol=0;
while(i<A.length())
{
    if(A[i]=='X'&&(A[i+1]=='C'||A[i+1]=='L'))sol-=10;
    else if(A[i]=='X')sol+=10;
    else if(A[i]=='L')sol+=50;
    else if(A[i]=='I'&&i+1<A.length()&&(A[i+1]=='V'||A[i+1]=='X'))sol-=1;
    else if(A[i]=='I')sol+=1;
    else if(A[i]=='V')sol+=5;
    else if(A[i]=='C'&& i+1<A.length()&&(A[i+1]=='D'||A[i+1]=='M'))sol-=100;
    else if(A[i]=='C')sol+=100;
    else if(A[i]=='D')sol+=500;
    else if(A[i]=='M')sol+=1000;
    
    i++;
}
    return sol;
    
}
