#include<bits/stdc++.h>
using namespace std;
#define int long long
#define int long long
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define neg cout << -1 << endl;
#define pb push_back
#define ss second
#define ff first
const int INF=1e18;
const int N=1e6+6;

int ans[N]= {};


void solve()
{
    int ans=0, ind=0;
    int n=22;
    for(int i=0; i<n; i++)
    {
        int a, b;
        cin>>a>>b;
        int cnt=a+(20*b);
        if(cnt>ans)
        {
            ans=cnt;
            ind=i+1;

        }
    }

    cout<<ind<<endl;
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

