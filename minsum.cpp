#include <iostream>
#include <algorithm>
using namespace std;

class Solution
{
public:
    long long int minValue(int a[], int b[], int n)
    {
        long long int sum = 0; 
        for (int i = 0; i < n; i++)
        {
            sum += (1LL * a[i] * b[i]);
        }
        return sum;
    }
};

int main()
{
    Solution obj;
    int a[] = {3, 1, 1};
    int b[] = {6, 5, 4};
    int n = 3;
    long long int result = obj.minValue(a, b, n); 
    cout << "Minimum Dot Product: " << result << endl;
    return 0;
}
