#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int coord[4][2];
    for (int i = 0; i < 4; i++)
    {
        cin>>coord[i][0]>>coord[i][1];
    }
    int dis1,dis2, dis3;

    dis1 = (int) sqrt(((coord[0][0]-coord[1][0])*(coord[0][0]-coord[1][0])) + ((coord[0][1]-coord[1][1])*(coord[0][1]-coord[1][1])));
    dis2 = (int) sqrt(((coord[0][0]-coord[2][0])*(coord[0][0]-coord[2][0])) + ((coord[0][1]-coord[2][1])*(coord[0][1]-coord[2][1])));
    dis3 = (int) sqrt(((coord[0][0]-coord[3][0])*(coord[0][0]-coord[3][0])) + ((coord[0][1]-coord[3][1])*(coord[0][1]-coord[3][1])));
    
    int min = min(dis1,min(dis2,dis3));
    cout<<min*min<<endl;
}

int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0);

    int t;
    cin>>t;
    while (t--)
    {
        solve();
    }

    return 0;
}