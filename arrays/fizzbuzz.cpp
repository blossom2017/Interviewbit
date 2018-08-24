vector<string> Solution::fizzBuzz(int A) {
    vector<string> sol;
    string a="Fizz";
    string b="Buzz";
    for (int i=1;i<=A;i++)
    {
       // cout<<"entering";
       if(i%3==0&&i%5==0)sol.push_back(a+b);
        else if( i%3 ==0)sol.push_back(a);
        else if(i%5 ==0){sol.push_back(b);}
        else {
         string   str=std::to_string(i);
          //  cout<<str;
        sol.push_back(str);}
    }
    return sol;
}
