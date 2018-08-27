int Solution::canCompleteCircuit(const vector<int> &A, const vector<int> &B) {
    int index =-1;
    int maxval=INT_MIN;
int ct=0;
int sum =0;
int start=0;
int end =1;
sum=A[start]-B[start];
int j;
int n = A.size();
  for (int i = 0; i <n ; i += j) {
            int gas_left = 0;
            // forward j stations
            for (j = 1; j <= n; j++) {
                int k = (i + j - 1) % n;
                gas_left += A[k] - B[k];
                if (gas_left < 0)
                    break;
            }
            if (j > n)
                return i;
        }

        return -1;

}
