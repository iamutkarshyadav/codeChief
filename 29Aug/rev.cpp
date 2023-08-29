class Solution
{
public:
    int getPairsCount(int arr[], int n, int k)
    {
        unordered_map<int, int> frequency; // Maps element to its frequency
        int countPairs = 0;                // Count of pairs with sum equal to K

        for (int i = 0; i < n; i++)
        {
            int diff = k - arr[i]; // The required complement of current element

            // Check if the complement exists in the map
            if (frequency.find(diff) != frequency.end())
            {
                countPairs += frequency[diff]; // Increment count by the frequency of the complement
            }

            frequency[arr[i]]++; // Update frequency map
        }

        return countPairs;
    }
};
