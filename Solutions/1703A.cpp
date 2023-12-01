#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    string str;
    int t;
    cin>>t;
    while (t)
    {
        cin>>str;
        if(str=="YES" || str=="Yes" || str=="YEs"|| str=="yes" || str=="yES" || str=="yeS" ||str=="YeS" || str=="yEs")cout<<str<<endl;
        else cout<<"NO"<<endl;
    
        t--;
    }
    
    return 0;
}