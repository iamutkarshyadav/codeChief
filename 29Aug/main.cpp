#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
class Solution
{
public:
    vector<int> findTwoElement(vector<int> arr, int n)
    {
        // code here
        vector<int> ans;
        sort(arr.begin(), arr.end());
        int missing = 0, repeating = 0;

        for (int i = 0; i < n - 1; i++)
        {
            if (arr[i] == arr[i + 1])
            {
                repeating = arr[i];
                break; 
            }
        }

        for (int i = 0; i < n; i++)
        {
            if (arr[i] != i + 1)
            {
                missing = i + 1;
                break; 
            }
        }

        ans.push_back(repeating);
        ans.push_back(missing);

        return ans;
    }
};
int main()
{
    vector<int> arr = {1, 3, 3};
    Solution obj;
    vector<int> ans = obj.findTwoElement(arr, 3);
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
    return 0;
}