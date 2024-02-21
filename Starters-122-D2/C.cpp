#include<bits/stdc++.h>
using namespace std;
#define int long long int
const int INF = 1e18;
const int N = 1e5 + 5;

void solve()
{
    int n;
    cin>>n;
    string s;
    int nn=n;
    while(nn>0)
    {
        if(nn%2==0)
        {
            s+='0';
        }
        else
        {
            s+='1';
        }
        nn/=2;
    }

    int ind=0;
    int total=0;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='0')
        {
            ind=i;
        }

    }

    for(int i=0;i<ind;i++)
    {
        if(s[i]=='1')
        {
            total+=pow(2ll, i);
        }
    }
    int lagbe=pow(2ll, ind);
    int ans=lagbe-total;
    if(ans==lagbe)
    {
        cout<<0<<endl;
    }
    else
    {
        cout<<ans<<endl;
    }


}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int test = 1;
    cin >> test;

    for (int tc = 1; tc <= test; tc++)
    {
        solve();
    }

    return 0;
}

