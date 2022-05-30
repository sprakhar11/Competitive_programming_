int maxSubarraySum(vector<int> &arr, int n)
{
    /*
        Don't write main().
        Don't read input, it is passed as function argument.    
        No need to print anything.
        Taking input and printing output is handled automatically.
    */
     int sum=0;
     int maxSum = INT_MIN;
    for(int i=0;i<n;i++){
       
        sum+=arr[i];
        if(sum>maxSum)
            maxSum = sum;
        else if(sum<0){
            sum = 0;
        }       
    }
    
    // Special Case: When all numbers
    // in arr[] are negative
     maxSum = arr[0];
     // Find the maximum element in array
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > maxSum)
        {
            maxSum = arr[i];
        }
    }
    return maxSum;
}

int maxSumRectangle(vector<vector<int>>& arr, int n, int m)
{
	// write your code here
    int maxSum=INT_MIN,sum=0;
    vector<int>auxi(n);
   
        for(int left=0;left<m;++left)
        {
             for(int k=0;k<n;++k)
               auxi[k]=0;
            for(int right=left;right<m;++right)
            {
                for(int i = 0;i < n; ++i)
                    auxi[i]+=arr[i][right];
                sum = maxSubarraySum(auxi,n);
                    if(sum>maxSum)
                        maxSum = sum;
            }
        }
    return maxSum;
}