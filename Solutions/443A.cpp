#include <bits/stdc++.h>

using namespace std;

int main()
{
    string str;
    int alph[125];
    int ans;
    ans = 0;
    for (int i = 0; i < 125; i++)alph[i]=0;
    
    getline(cin,str);
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == '{' || str[i] == '}' || str[i] ==' ' || str[i]==',')
            continue;
        else
        {
            int k;
            k = (int)str[i];
            alph[k] = 1;
        }
    }

    for (int i = 0; i < 125; i++)
    {
        if (alph[i] == 1)ans++;
    }
    cout << ans;

    return 0;
}