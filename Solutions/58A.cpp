#include<bits/stdc++.h>
using namespace std;


int main()
{
    string str;
    cin>>str;
    int ind=0;
    int point=0;
    string word = "hello";
    for(int i=0;i<str.length();i++){
        if(ind==5)break;
        if(str[i]==word[ind]){
            ind++;
            point++;
        }
    }
    if(point==5)cout<<"YES"<<endl;
    else cout<<"NO";

    return 0;
}