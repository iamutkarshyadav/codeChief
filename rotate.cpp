#include<iostream>
#include<vector>
using namespace std;
class Solution
{
public:
    vector<int> valueEqualToIndex(int arr[], int n)
    {
        // code here
        for (int i = 0; i < n; i++){
            if (arr[i] == i+1){
                return {i+1};
            }
        }
    }
};