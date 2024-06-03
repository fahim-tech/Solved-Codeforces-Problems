#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        string s;
        cin >> n;
        cin >> s;
        int flag = 0;
        if (n == 1)
            cout << "YES" << endl;
        else
        {
            for (int i = 0; i < s.size() - 1; i++)
            {
                if (s[i + 1] < s[i])
                    flag = 1;
            }
            if (flag == 1)
                cout << "NO" << endl;
            else
                cout << "YES" << endl;
        }
    }

    return 0;
}