#include <iostream>
#include <string>
using namespace std;

class Solution
{
public:
    string longestCommonPrefix(string arr[], int N)
    {
         
    }
};

int main()
{
    int N;
    cin >> N;

    string arr[N];
    for (int i = 0; i < N; i++)
    {
        cin >> arr[i];
    }

    Solution obj;
    string prefix = obj.longestCommonPrefix(arr, N);
    cout << "Longest Common Prefix: " << prefix << endl;

    return 0;

}




