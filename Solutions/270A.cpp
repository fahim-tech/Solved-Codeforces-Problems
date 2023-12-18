#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int x;
        cin>>x;
        int n;
        n = 360/(180-x);
        if(n*(180-x)==360)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    


    return 0;
}