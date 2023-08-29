/*
CodeChef offers a feature called streak count. A streak is maintained if you solve at least one problem daily.

Om and Addy actively maintain their streaks on CodeChef. Over a span of
�
N consecutive days, you have observed the count of problems solved by each of them.

Your task is to determine the maximum streak achieved by Om and Addy and find who had the longer maximum streak.

Input Format
The first line of input will contain a single integer
�
T, denoting the number of test cases.
Each test case consists of multiple lines of input.
The first line of each test case contains an integer
�
N — the number of days.
The second line of each test case contains
�
N space-separated integers, the
�
�
ℎ
i
th
  of which is
�
�
A
i
​
 , representing the problems solved by Om on the
�
�
ℎ
i
th
  day.
The third line of each test case contains
�
N space-separated integers, the
�
�
ℎ
i
th
  of which is
�
�
B
i
​
 , representing the problems solved by Addy on the
�
�
ℎ
i
th
  day.
Output Format
For each test case, output:

OM, if Om has longer maximum streak than Addy;
ADDY, if Addy has longer maximum streak than Om;
DRAW, if both have equal maximum streak.
You may print each character in uppercase or lowercase. For example, OM, om, Om, and oM, are all considered the same.
*/
#include<iostream>
using namespace std; 
int main(){
    int t;
    cin >> t; 
    while(t--){
        int n;
        cin >> n;
        int a[n], b[n];
        for (int i = 0; i < n; i++){
            cin >> a[i];
        }
        for (int i = 0; i < n; i++){
            cin >> b[i];
        }
        int max_streak_a = 0, max_streak_b = 0;
        
    }
}