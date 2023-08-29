#include <iostream>
#include <algorithm>
using namespace std;

class Solution
{
public:
    void findMidSum(int ar1[], int ar2[], int n)
    {
        int k = 0;
        int mergeArr[2*n];

        for (int i = 0; i < n; i++)
        {
            mergeArr[k] = ar1[i];
            k++;
        }

        for (int i = 0; i < n; i++)
        {
            mergeArr[k] = ar2[i];
            k++;
        }

        for (int i = 0; i < 2 * n; i++)
        {
            cout << mergeArr[i] << " ";
        }
        cout << endl;
        int sum = 0; 
        for (int i = 0; i < 2*n; i++){
            sum += mergeArr[i];
        }
        cout << sum;
    }
};

int main()
{
    Solution obj;
    int ar1[] = {1, 2, 4, 6, 10};
    int ar2[] = {4, 5, 6, 9, 12};
    int n = 5;
    obj.findMidSum(ar1, ar2, n);
    return 0;
}
 