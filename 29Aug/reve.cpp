#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

class Solution
{
public:
    void immediateSmaller(vector<int> &arr, int n)
    {
        vector<int> result;
        for (int i = 0; i < n - 1; i++)
        { 
            if (arr[i] > arr[i + 1])
            {
                result.push_back(arr[i + 1]); 
            }
            else
            {
                result.push_back(-1);
            }
        }
    }
};

int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    Solution obj;
    obj.immediateSmaller(arr, n);

    return 0;
}
