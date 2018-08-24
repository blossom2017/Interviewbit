bool isPossible(vector <int> &A,int B,int mid)

{
	int studentsRequired = 1;
	int curr_sum = 0;

	// iterate over all books
	for (int i = 0; i < A.size(); i++)
	{
		// check if current number of pages are greater
		// than curr_min that means we will get the result
		// after mid no. of pages
		if (A[i] > mid)
			return false;

		// count how many students are required
		// to distribute curr_min pages
		if (curr_sum + A[i] > mid)
		{
			// increment student count
			studentsRequired++;

			// update curr_sum
			curr_sum = A[i];

			// if students required becomes greater
			// than given no. of students,return false
			if (studentsRequired > B)
				return false;
		}

		// else update curr_sum
		else
			curr_sum += A[i];
	}
	return true;
}



int Solution::books(vector<int> &A, int B) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
   // std::sort(A.begin(),A.end());
  long long sum = 0;
 int n =A.size();
    // return -1 if no. of books is less than
    // no. of students
    if (n < B)
        return -1;
 
    // Count total number of pages
    for (int i = 0; i < n; i++)
        sum += A[i];
 
    // initialize start as 0 pages and end as
    // total pages
    int start = 0, end = sum;
     int result = INT_MAX;
 
    // traverse until start <= end
    while (start <= end)
    {
        // check if it is possible to distribute
        // books by using mid is current minimum
        int mid = (start + end) / 2;
        if (isPossible(A,  B, mid))
        {
            // if yes then find the minimum distribution
            result = min(result, mid);
 
            // as we are finding minimum and books
            // are sorted so reduce end = mid -1
            // that means
            end = mid - 1;
        }
 
        else
            // if not possible means pages should be
            // increased so update start = mid + 1
            start = mid + 1;
    }
 
    // at-last return minimum no. of  pages
    return result;
}
