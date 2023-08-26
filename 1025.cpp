#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int proteinNeedded = 0;
        int proteinStored = 0;
        int day = 0;
        for (int i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            proteinNeedded = k;
            proteinNeedded += proteinStored;
            if (a >= proteinNeedded)
            {
                a -= proteinNeedded;
                proteinStored = a;
            }
            else
            {
                day = i;
                break;
            }
        }

        if (day == 0)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO " << day << endl;
        }
    }
    return 0;
}
