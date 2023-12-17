#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    string str;
    cin>>n;
    cin>>str;
    transform(str.begin(), str.end(), str.begin(), ::toupper); 

    if(n<26)cout<<"NO"<<endl;
    else{

        int alph[125];
        memset(alph,0,sizeof(alph));
   
        cout<<endl;
        for (int i = 0; i < str.length(); i++) {
            alph[(int)str[i]]=1;
        }
        int ans=0;
        for (int i = 0; i < 125; i++)
        {
            if(alph[i]==1)ans++;
        }
        if(ans==26)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;

    }

    return 0;
}