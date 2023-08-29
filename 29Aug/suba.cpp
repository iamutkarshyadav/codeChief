class Solution
{
public:
    vector<int> subarraySum(vector<int> arr, int n, long long s)
    {
        int start = 0, end = 0;
        long long currentSum = 0;

        while (end < n)
        {
            currentSum += arr[end];

            while (currentSum > s)
            {
                currentSum -= arr[start];
                start++;
            }

            if (currentSum == s)
            {
                return {start + 1, end + 1};
            }

            end++;
        }

        return {-1}; 
    }
};
