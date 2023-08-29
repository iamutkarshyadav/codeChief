#include<iostream>
#include<vector>
#include <algorithm>
using namespace std; 
class Solution
{
public:
    // Function to find maximum product subarray
    long long maxProduct(vector<int> arr, int n)
    {
        // code here
        sort(arr.begin(), arr.end());
        for (int i = 0; i < n; i++){
            max(arr[i] * arr[i + 1]);
        }
    }
};