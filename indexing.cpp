#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class Solution
{
public:
    vector<int> valueEqualToIndex(int arr[], int n)
    {
        vector<int> v;
        // code here
        sort(arr, arr + n);
        for (int i = 0; i < n; i++){
            if(arr[i] == i+1){
                v.push_back(arr[i]);
            }
            else{
                return -1;
            }
        }
    }
};