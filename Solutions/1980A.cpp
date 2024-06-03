#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int n, m ;
cin>>n>>m;
        string str;
        cin>>str;
        int a,b,c,d,e,f,g,ans;
        a=b=c=d=e=f=g=ans=0;
        for (int i = 0; i < n; i++)
        {
            if(str[i]=='A')a++;
            if(str[i]=='B')b++;
            if(str[i]=='C')c++;
            if(str[i]=='D')d++;
            if(str[i]=='E')e++;
            if(str[i]=='F')f++;
            if(str[i]=='G')g++;

        }
        if(a<m)ans+=m-a;
        if(b<m)ans+=m-b;
        if(c<m)ans+=m-c;
        if(d<m)ans+=m-d;
        if(e<m)ans+=m-e;
        if(f<m)ans+=m-f;
        if(g<m)ans+=m-g;
        cout<<ans<<endl;

        

        }
}