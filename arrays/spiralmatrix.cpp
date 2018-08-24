vector<vector<int> > Solution::generateMatrix(int A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details

    vector< vector <int> >result(A,vector <int>(A));
    //cout<<result.size();
    //cout<<result[0].size();
    int rowl=0,rowu=A-1,collow=0,colup=A-1,i,k=1;
          while(rowl<=rowu&&collow<=colup)
          {
              for(i=collow;i<=colup;i++)
              {
                  result[rowl][i]=k;
                  k++;
              }
              rowl++;
              if(rowl<=rowu&&collow<=colup)
              {
              for(i=rowl;i<=rowu;i++)
              {
                  result[i][colup]=k;
                  k++;
                  
              }colup--;}
              
              if(rowl<=rowu)
              {
              for(i=colup;i>=collow;i--)
              {
                  result[rowu][i]=k;
                  k++;
              }
                  rowu--;
              }
              if(collow<=colup )
              {
                  for(i=rowu;i>=rowl;i--)
                  {
                      result[i][collow]=k;
                      k++;
                  }
                  collow++;
              }
              
              
          }
          
         
         
         
          return result;
         
}
