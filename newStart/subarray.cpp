#include<iostream> 
#include<algorithm>
using namespace std;
string isSubset(int a1[], int a2[], int n, int m)
{
    sort(a1, a1 + n);
    sort(a2, a2 + m);
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            if(a2[j] ==  a1[i]){
                return "Yes";
            }
        }
        return "No";
    }
}