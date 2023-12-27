#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, flag = 1;
    int given[100];
    int ans[100];
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> given[i];
    ans[0] = given[0];
    for (int i = 1; i < n; i++)
    {
        if (given[i] > ans[i - 1] || given[i] == 0)
            ans[i] = given[i] + ans[i - 1];
        else
            flag = 0;
    }
    if (flag == 0)
        cout << -1<<endl;
    else
    {
        for (int i = 0; i < n; i++)
            cout << ans[i] << " ";
        cout << endl;
    }
}
int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0);

    int t;
    cin >> t;
    while (t--)
        solve();

    return 0;
}