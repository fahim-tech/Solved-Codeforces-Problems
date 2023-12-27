#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int x;
    cin >> x;
    if (x == 1)
        cout << 1 << endl;
    else
    {
        int ans = 0;
        while (x)
        {
            int n = 1;
            while (pow(2, n) <= x)
            {
                n++;
            }
            x -= pow(2, n - 1);
            ans++;
        }
        cout << ans << endl;
    }
}
int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0);
    solve();

    return 0;
}