#include <iostream>
#include <algorithm>
using namespace std;

class Solution
{
public:
    int kthElement(int arr1[], int arr2[], int n, int m, int k)
    {
        int mergedArr[m + n];
        merge(arr1, arr1 + n, arr2, arr2 + m, mergedArr);

        return mergedArr[k - 1];
    }
};

int main()
{
    Solution obj;
    int arr1[] = {100, 112, 256, 349, 770};
    int arr2[] = {72, 86, 113, 119, 265, 445, 892};
    int k = 7;
    int n = 5;
    int m = 7;

    int result = obj.kthElement(arr1, arr2, n, m, k);
    cout << "Kth Element: " << result << endl;

    return 0;
}
