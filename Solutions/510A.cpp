#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m, flag = 1;
    cin >> n >> m;

    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
        {
            for (int i = 0; i < m; i++)
            {
                cout << "#";
            }
            cout << endl;
        }
        else
        {
            if (flag == 1)
            {
                for (int i = 0; i < m - 1; i++)
                {
                    cout << ".";
                }
                cout << "#" << endl;
                flag = 0;
            }
            else
            {
                cout << "#";
                for (int i = 0; i < m - 1; i++)
                {
                    cout << ".";
                }
                cout<<endl;
                flag = 1;
            }
        }
    }

    return 0;
}