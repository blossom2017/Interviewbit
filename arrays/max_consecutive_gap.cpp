class Bucket {
public:
    bool used = false;
    int minval = INT_MAX;// same as INT_MAX
    int maxval = INT_MIN;        // same as INT_MIN
};




int Solution::maximumGap(const vector<int> &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    
  if (A.empty() || A.size() < 2)
        return 0;

    int mini = *min_element(A.begin(), A.end()),
        maxi = *max_element(A.begin(), A.end());

    int bucketSize = max(1, (maxi - mini) / ((int)A.size() - 1));        // bucket size or capacity
    int bucketNum = (maxi - mini) / bucketSize + 1;       
    //+1 is required to store the maximum element  number of buckets
    vector<Bucket> buckets(bucketNum);

    for (auto&& num : A) {
        int bucketIdx = (num - mini) / bucketSize;                          // locating correct bucket
        buckets[bucketIdx].used = true;
        buckets[bucketIdx].minval = min(num, buckets[bucketIdx].minval);
        buckets[bucketIdx].maxval = max(num, buckets[bucketIdx].maxval);
    }


int prevBucketMax = mini, maxGap = 0;
    for (auto&& bucket : buckets) {
        if (!bucket.used)
            continue;

        maxGap = max(maxGap, bucket.minval - prevBucketMax);
        prevBucketMax = bucket.maxval;
    }

    return maxGap;
    
}
        

