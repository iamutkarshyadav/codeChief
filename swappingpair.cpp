#include<iostream>
using namespace std;
class Solution
{
public:
    int findSwapValues(int A[], int n, int B[], int m)
    {
        int sumA = 0, sumB = 0;
        for (int i = 0; i < n; i++)
        {
            sumA += A[i];
        }
        for (int i = 0; i < m; i++)
        {
            sumB += B[i];
        }

        int diff = sumA - sumB;
        if (diff % 2 != 0)
        {
            return -1; 
        }

        diff /= 2;

        sort(A, A + n);
        sort(B, B + m);

        int i = 0, j = 0;
        while (i < n && j < m)
        {
            int currDiff = A[i] - B[j];
            if (currDiff == diff)
            {
                return 1; 
            }
            else if (currDiff < diff)
            {
                i++;
            }
            else
            {
                j++;
            }
        }

        return -1; 
    }
};
