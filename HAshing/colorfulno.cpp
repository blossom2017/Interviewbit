int Solution::colorful(int A) {
    int x=A;
    int arr[32];
    int i=0;
    while(x!=0)
    {
        int num=x%10;
        x=x/10;
    //    cout<<num<<endl;
        arr[i]=num;
        i++;
    }
  //  cout<<i<<endl;
    unordered_set<int> s;
    
    for(int j=0;j<i;j++)
    {
        int prod=1;
        for(int k=j;k<i;k++)
        {
            //cout<<k<<" ";
            //cout<<arr[k]<<endl;
             prod=prod*arr[k];
            if(s.find(prod)==s.end()){//cout<<prod<<" ";
            s.insert(prod);}
            else return 0;
        }
    }
    return 1;
}
