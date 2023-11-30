#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int k,flag=1;
    int alph[123];
    string str ,ans;
    for(int i=0;i<123;i++)alph[i]=0;
    cin>>k;
    cin>>str;
    for (int i = 0; i < str.length(); i++)
    {
        int aski = int(str[i]) ;
        //cout<<"aski value = "<< aski << " "; 
        alph[aski]++;
    } 
 
    for (int i = 0; i < 123; i++) 
    {
        if(alph[i]!=0)
        {
            if (alph[i] % k ==0)
            {
                int times = alph[i] / k ;
                while (times)
                {
                    ans.push_back(char(i));
                    times--;
                }
            }
            else flag=0;
        }
    }
    if(flag==0)cout<<-1;
    if(flag==1)
    {
            while (k)
            {
              cout<<ans;
              k--;
            }
    }
    return 0;
}