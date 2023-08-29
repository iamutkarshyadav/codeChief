class Solution
{
public:
    int maxLen(vector<int> &A, int n)
    {
        unordered_map<int, int> sumMap; 
        int maxLength = 0;
        int sum = 0;

        for (int i = 0; i < n; ++i)
        {
            sum += A[i];

           
            if (sum == 0)
            {
                maxLength = i + 1;
            }
            if (sumMap.find(sum) != sumMap.end())
            {
                maxLength = max(maxLength, i - sumMap[sum]);
            }
            else
            {
                sumMap[sum] = i;
            }
        }

        return maxLength;
    }
};
