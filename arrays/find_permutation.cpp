  //  vector<int> solution;
//      vector<char>sequence;
      
void swap(int a ,int b,vector<int> &solution)
{
    int temp;
    temp=solution[a];
    solution[a]=solution[b];
    solution[b]=temp;
}


void check(int i,vector<int> &solution,vector <char> &sequence){
    if(i==0)return;
    else{
    char ch=sequence[i-1];
    if(ch=='D')
    {
        if(solution[i]>solution[i-1])
        {
            swap(i,i-1,solution);
            check(i-1,solution,sequence);
        }
    }
    if(ch=='I')
    {
        if(solution[i]<solution[i-1])
        {
            swap(i,i-1,solution);
            check(i-1,solution,sequence);
        }
    }
    
    
    
    
    }
}

vector<int> Solution::findPerm(const string A, int B) {
    vector<int> solution(B);

    vector<char >sequence(B-1);
    for(int i=0;i<B-1;i++)
    {
      //  cout<<"enter";
    sequence[i]=A[i];
    //cout<<sequence[i];
    }
    for(int i=0;i<B;i++)
    {
        solution[i]=i+1;
      //  cout<<solution[i];
        
    }
    for(int i=1;i<B;i++)
    {
        check(i,solution,sequence);
    }
    
   return solution; 
}



