#include<iostream> 
#include<vector>
using namespace std; 

class Solution
{
public:
    vector<int> leaders(int a[], int n)
    {
        vector<int> v;
        // Code here
        for (int i = 0; i < n; i++){
            if(a[i] < a[i+1]){
                v.push_back(a[i + 1]);
            }
        }
        for (int i = 0; i < n; i++){
            v.push_back(a[n - 1]);
        }
    }
};
