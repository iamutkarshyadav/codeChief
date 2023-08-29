class Solution
{
public:
    void rotateArr(int arr[], int d, int n)
    {
        // code here
        while (start < end)
        {
            swap(arr[start], arr[end]);
            start++;
            end--;
        }
    }
    void rotateArr(int arr[], int d, int n)
    {
        d = d % n;
        reverseArray(arr, 0, d - 1);
        reverseArray(arr, d, n - 1);
        reverseArray(arr, 0, n - 1);
    }
};