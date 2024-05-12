#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    string light;
    char current;
    bool gFound=false, currentFound=false, gFoundBeforeCurrent=false;
    cin>>n>>current;
    cin>>light;
    for (int i = light.length()-1; i < -1 ; i--)
    {
        if(light[i]=='g' && currentFound==false)
        {
            gFoundBeforeCurrent=true;
            break;
        }
    }
    if(!gFoundBeforeCurrent)
    {
        
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