#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while (t--)
    {
        int n,m;
        cin>>n>>m;
        if(m>n)cout<<"No"<<endl;
        else if(m==n)cout<<"Yes"<<endl;
        else{
            if((n-m)%2==0)cout<<"Yes"<<endl;
            else cout<<"No"<<endl;
        }
    }
    


    return 0;
}