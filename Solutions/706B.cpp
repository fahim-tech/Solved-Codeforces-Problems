#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, q, coin,temp;
    cin >> n;
    vector<int> shop;
    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        shop.push_back(temp);
    }
    sort(shop.begin(),shop.end());
    cin >> q;
    for (int i = 0; i < q; i++)
    {
        cin >> coin;
        int lo=-1, hi=n;
        while (hi-lo>1)
        {
            int mid = (hi+lo)/2;
            if(shop[mid]>coin)hi = mid;
            else lo = mid;
        }
        
        cout<<hi<<endl;
    }
}
int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0);
    solve();

    return 0;
}