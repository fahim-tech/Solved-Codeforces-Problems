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
        int count, f, k;
        cin >> count >> f >> k;
        int arr[count];
        for (int i = 0; i < count; i++)
        {
            cin >> arr[i];
        }
        int fav = arr[f - 1];
        sort(arr, arr + count, greater<int>());
        int removed = 0;
        int secoc = 0;
        for (int i = 0; i < k; i++)
        {
            if (arr[i] == fav)
                removed = 1;
        }

        for (int i = k; i < count; i++)
        {
            if (arr[i] == fav)
                secoc = 1;
        }
        if(removed==1)
        {
            if(secoc==1)cout<<"MAYBE"<<endl;
            else cout<<"YES"<<endl;
        }
        else cout<<"NO"<<endl;

    }

    return 0;
}
