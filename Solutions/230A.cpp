#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int s, n, dstrength, bonus, flag = 1;
    vector<pair<int, int>> sbpair;
    cin >> s >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> dstrength >> bonus;
        sbpair.push_back(make_pair(dstrength, bonus));
    }
    sort(sbpair.begin(), sbpair.end());
    for (int i = 0; i < sbpair.size(); i++)
    {
        if (sbpair[i].first < s)
        {
            s += sbpair[i].second;
            continue;
        }
        else
        {
            flag = 0;
            break;
        }
    }
    if (flag == 1)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}
int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0);
    solve();

    return 0;
}