#include<bits/stdc++.h>
using namespace std;
#define int long long
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define neg cout << -1 << endl;
#define pb push_back
const int INF=1e18;
const int N=2e5+5;

void solve()
{
    int n;
    cin>>n;
    string s;
    string t;
    cin>>s>>t;
    int dif[n];
    for(int i=0; i<n; i++)
    {
        if(t[i]>=s[i])
        {
            dif[i]=t[i]-s[i];
        }
        else
        {
            dif[i]='Z'-s[i]+t[i]-'A'+1;
        }
    }


    int ans[n];

    for(int i=0; i<n; i++)
    {
        if(dif[i]%3==0)
        {
            ans[i]=dif[i]/3ll;
        }
        else
        {
            int cnt=dif[i]%3ll;
            //cnt=3-cnt;
            int lagbe=cnt*8ll;
            int gap=dif[i]+cnt;
            lagbe+=(gap+2)/3ll;
            ans[i]=lagbe;
        }
    }
    for(auto it:ans)
    {
        cout<<it<<" ";
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

