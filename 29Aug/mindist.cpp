#include <iostream>
using namespace std;

class Solution
{
public:
    int minDist(int a[], int n, int x, int y)
    {
        // code here
        int count = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] == x)
            {
                count++;
                for (int j = 0; j < n; j++)
                {
                    if (a[j] == y)
                    {

                        return  count;
                        break;
                    }
                }
            }
        }
    }
};
int main()
{
    int a[5] = {1, 2, 3, 2};
    int n = 4;
    int x = 1;
    int y = 2;
    Solution obj;
    obj.minDist(a, n, x, y);
    return 0;
}