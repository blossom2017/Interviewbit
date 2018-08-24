/**
 * @input X : Integer array corresponding to the X co-ordinate
 * @input n1 : Integer array's ( X ) length
 * @input Y : Integer array corresponding to the Y co-ordinate
 * @input n2 : Integer array's ( Y ) length
 *
 * Points are represented by (X[i], Y[i])
 * 
 * @Output Integer
 *
 */
 #include<stdio.h>
 #include<math.h>
 #include<stdlib.h>
 int coverPoints(int* X, int n1, int* Y, int n2) {
    int i=1;
    int x,y;
    int dist;
    int sq;
    double squareroot;
    int sum=0;
    for(i=0;i<n1-1;i++)
    {
        x=X[i+1]-X[i]>0?X[i+1]-X[i]:X[i]-X[i+1];
        y=Y[i+1]-Y[i]>0?Y[i+1]-Y[i]:Y[i]-Y[i+1];
        squareroot=x>y?x:y;
        
        sum=sum+squareroot;
    }
    return sum;
}
 