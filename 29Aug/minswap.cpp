#include<iostream>
#include<vector>
using namespace std;
class Solution
{
public:
    // Function to find the minimum number of swaps required to sort the array.
    int minSwaps(vector<int> &nums)
    {
        // Code here
        int n = sizeof(nums);
        int count = 0;
        for (int i = 0; i < n; i++){
            if(nums[i] < nums[i+1]){
                i++;
            }
            else{
                int temp = nums[i];
                
            }
        }
    }
};