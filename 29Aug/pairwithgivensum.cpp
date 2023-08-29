#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    bool binarySearch(int B[], int M, int target)
    {
        int left = 0, right = M - 1;
        while (left <= right)
        {
            int mid = left + (right - left) / 2;
            if (B[mid] == target)
                return true;
            else if (B[mid] < target)
                left = mid + 1;
            else
                right = mid - 1;
        }
        return false;
    }

    vector<pair<int, int>> allPairs(int A[], int B[], int N, int M, int X)
    {
        vector<pair<int, int>> result;
        sort(B, B + M); // Sort array B

        for (int i = 0; i < N; i++)
        {
            if (binarySearch(B, M, X - A[i]))
            {
                result.push_back(make_pair(A[i], X - A[i]));
            }
        }

        return result;
    };

    int main()
    {
        Solution solution;

        int A[] = {1, 2, 4, 5, 7};
        int B[] = {5, 6, 3, 4, 8};
        int N = 5;
        int M = 5;
        int X = 9;

        vector<pair<int, int>> result = solution.allPairs(A, B, N, M, X);

        for (const auto &pair : result)
        {
            cout << "(" << pair.first << ", " << pair.second << ")" << endl;
        }

        return 0;
    }
