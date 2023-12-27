#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,n;
    cin>>t;
    while (t--)
    {
        int x,y;
        int a,b,c,d;
        a=b=c=d=0;
        cin>>n;
        while (n--)
        {
            cin>>x>>y;
            if(x>0)a=1;
            if(x<0)b=1;
            if(y<0)c=1;
            if(y>0)d=1;
            // if(y==0)zeroy=1;
            // if(x==0)zerox=1;
        }
        if(a==1 && d==1 && c==1 && b==1)cout<<"NO"<<endl;
        else cout<<"YES"<<endl; 

    }

    return 0;
}