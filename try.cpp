class Solution
{
public:
    void pushZerosToEnd(int arr[], int n)
    {
        int nonZeroIndex = 0; 

        for (int i = 0; i < n; i++)
        {
            if (arr[i] != 0)
            {
                arr[nonZeroIndex] = arr[i]; 
                nonZeroIndex++;
            }
        }

  
        while (nonZeroIndex < n)
        {
            arr[nonZeroIndex] = 0;
            nonZeroIndex++;
        }
    }
};