#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    int ans = 0;
    cin >> n;
    int num[5];
    memset(num, 0, sizeof(num));
    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        num[temp]++;
    }
    ans += num[4];
    if (num[3] != 0)
    {
        ans += num[3];
        if (num[3] < num[1])
            num[1] -= num[3];
        else
            num[1] = 0;
    }
    if (num[2] != 0)
    {
        ans += (num[2] / 2);
        if(num[2]%2==1)
        {
            ans++;
            num[1]-=2;
        }
    }
    if (num[1] != 0)
    {
        ans += (ceil(num[1]/4.0));
    }
    cout << ans;

    return 0;
}