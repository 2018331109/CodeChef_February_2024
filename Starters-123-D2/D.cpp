#include<bits/stdc++.h>
using namespace std;
#define int long long int
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define neg cout << -1 << endl;
#define pb push_back
#define ss second
#define ff first
const int INF=1e18;
const int N=1e6+6;
const int md=998244353;

vector<int>v(N);

void solve()
{
    int n, q;
    cin>>n>>q;
    v.assign(n, 0);
    int mx=0;
    int ans=0;
    for(int i=0; i<n; i++)
    {
        cin>>v[i];
        ans+=v[i]+v[i];

    }
    //sort(v.begin(), v.end());
    int l=-1, r=-1;
    while(q--)
    {
        int x;
        cin>>x;
        int f=0;
        for(int i=0; i<n-1; i++)
        {
            //ans-=v[i];
            for(int j=i+1; j<n; j++)
            {
                int temp=ans-v[i]-v[j];
                if(temp==x)
                {
                    f=1;
                    cout<<v[i]<<" ";
                    for(int k=0; k<n; k++)
                    {
                        if(k==i || k==j)
                        {
                            continue;
                        }
                        else
                        {
                            cout<<v[k]<<" ";
                        }
                    }
                    cout<<v[j]<<endl;
                    //return;
                }
                if(f)
                {
                    break;
                }
            }

            if(f)
            {
                break;
            }
        }
        if(!f)
        {
            cout<<-1<<endl;
        }

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

