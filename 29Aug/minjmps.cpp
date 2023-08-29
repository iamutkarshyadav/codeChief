class Solution
{
public:
    int minJumps(int arr[], int n)
    {
        if (n <= 1)
        {
            return 0; // Already at the end or no elements
        }

        if (arr[0] == 0)
        {
            return -1; // Can't make any progress
        }

        int maxReach = arr[0]; // Farthest index that can be reached
        int steps = 1;         // Number of jumps made so far
        int jumpEnd = arr[0];  // Ending index of the current jump

        for (int i = 1; i < n; i++)
        {
            if (i == n - 1)
            {
                return steps; // Reached the last index
            }

            maxReach = max(maxReach, i + arr[i]);
            if (i == jumpEnd)
            {
                steps++;
                jumpEnd = maxReach;
            }

            if (i >= jumpEnd)
            {
                return -1; // Can't progress further
            }
        }

        return -1; // Shouldn't reach this point
    }
};
