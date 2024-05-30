#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    int sum=0;
    cin>>n;
    int coin[n];
    for (int i = 0; i < n; i++)
    {
        cin>>coin[i];
        sum+=coin[i];
    }
    int half = sum/2;
    if(n==1){
        cout<<1;
        return 0;
    }
    sort(coin,coin+n,greater<int>());
    int ans=0;
    sum=0;
    for (int i = 0; i < n; i++)
    {
            sum+=coin[i];
            ans+=1;
        if(sum>half)break;
    }
    
    cout<<ans<<endl;

    return 0;
}