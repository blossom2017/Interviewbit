/**
 * @input A : Integer
 * 
 * @Output 2D int array. You need to malloc memory. Fill in number_of_rows as row.
 * For each row i, A[i][0] should indicate the number of columns in row i. 
 * Then A[i][1] to A[i][col] should have the values in those columns.
 */
int ** generate(int A, int *number_of_rows) {
	// SAMPLE CODE
	
	 *number_of_rows = A;
	  int **result = (int **)malloc(A * sizeof(int *));
	  // DO STUFF HERE
	  int i,j;
	  if(A==0)return 0;
	  else {
	  for(i=0;i<A;i++)
	  {
	  result[i]=(int *)malloc((A+1)* sizeof(int));
	  }
	  for(i=0;i<A;i++)
	  {
	      for(j=0;j<=A;j++)
	      {
	          result[i][j]=0;
	      }
	  }
	  result[0][0]=1;
	  result[0][1]=1;
	  for( i=1;i<A;i++)
	  {
	      
	      result[i][0]=i+1;
	      result[i][1]=1;
	      for( j=2;j<=i+1;j++)
	      {
	          result[i][j]=result[i-1][j]+result[i-1][j-1];
	          
	      }
	  }
	  return result;
	 
	  }
	 

}
