#include<iostream> 
#include<string>
#include<algorithm>
using namespace std; 
class Solution
{
public:
    int longestKSubstr(string s, int k)
    {
        int count = 0;
        // your code here
        int n = s.length();
        for (int i = 0; i < n; i++){
            for (int j = i + 1; j < n; j++){
                if(s[i] != s[j]){
                    count++;
                }
            }
        }
    }
};
int main(){
    string s = "aabacbebebe";
    int n = s.length();
    Solution obj;
    cout << obj.longestKSubstr(s, n);
}