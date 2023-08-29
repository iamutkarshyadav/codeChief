class Solution
{
public:
    static bool compareStrings(const string &a, const string &b)
    {
        return a + b > b + a;
    }

    string printLargest(vector<string> &arr)
    {
        sort(arr.begin(), arr.end(), compareStrings);

        string result = "";
        for (const string &numStr : arr)
        {
            result += numStr;
        }

       
        if (result[0] == '0')
        {
            return "0";
        }

        return result;
    }
};
