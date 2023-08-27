#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
class Solution
{
public:

    int majorityElement(int a[], int size)
    {
        int res = -1;
        int count = 0;
        for (int i = 0; i < size; i++)
        {
            if (count == 0)
            {
                res = a[i];
                count = 1;
            }
            else
            {
                if (a[i] == res)
                    count++;
                else
                    count--;
            }
        }
        count = 0;
        for (int i = 0; i < size; i++)
        {
            if (a[i] == res)
                count++;
        }
        if (count > size / 2)
            return res;
        else
            return -1;
    }
};
