#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, t;
    cin >> t;
    while (t)
    {
        int ans=0;
        cin >> a;
        for (int i = 0; i < 3; i++)
        {
            cin >> b;
            if (b > a)
                ans++;
        }
        cout << ans<<endl;
        t--;
    }

    return 0;
}