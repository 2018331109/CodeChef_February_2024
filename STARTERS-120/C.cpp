#include<bits/stdc++.h>
using namespace std;
#define int long long
const int N = 200005;
#define yes cout << "Yes" << endl;
#define no cout << "No" << endl;
#define pb push_back

void solve()
{
    int n;
    cin>>n;
    unordered_map<int, int>mp;
    mp.clear();
    vector<int>ans;
    for(int i=0; i<n*2; i++)
    {
        int x;
        cin>>x;
        if(mp[x]==0)
        {
            ans.pb(x);
        }
        mp[x]++;
    }

    for(int i=0; i<n; i++)
    {
        cout<<ans[i]<<" ";
    }

    cout<<endl;

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

