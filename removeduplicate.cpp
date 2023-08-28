#include <iostream>
#include <string>
using namespace std;

class Solution
{
public:
    string removeDuplicates(string str)
    {
        int n = str.length();
        int i = 0;

        while (i < n - 1)
        {
            if (str[i] == str[i + 1])
            {
                str.erase(i + 1, 1);
                n--; 
            }
            else
            {
                i++; 
            }
        }

        return str;
    }
};

int main()
{
    Solution obj;
    string str("geeksforgeeks");
    cout << "Before erase: " << str << endl;
    string result = obj.removeDuplicates(str);
    cout << "After erase: " << result << endl;
    return 0;
}
