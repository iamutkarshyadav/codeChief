#include<algorithm>
#include<iostream>
using namespace std; 
class Solution
{
public:
    
    bool findTriplets(int arr[], int n)
    {
        // Your code here
        sort(arr, arr + n);
        for (int i = 0; i < n;i++){
            for (int j = i + 1; j < n; j++){
                for (int k = i + 2; k < n; k++){
                    if(arr[i] + arr[j] + arr[k] == 0)
                        return true;
                    else
                        return false;
                }
            }
        }
    }
};