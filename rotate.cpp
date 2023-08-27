#include<vector>
#include<iostream>
#include<algorithm>
using namespace std;

class Solution
{
public:
    vector<int> duplicates(int arr[], int n)
    {
        // code here
        vector<int> result;
        for (int i = 0; i < n; i++){
            arr[arr[i] % n] += n;
        }
    }
};