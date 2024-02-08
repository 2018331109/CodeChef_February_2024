#include<bits/stdc++.h>
using namespace std;
#define int long long
const int N = 200005;
#define yes cout << "Yes" << endl;
#define no cout << "No" << endl;
#define pb push_back

void solve()
{
    int a, b;
    cin>>a>>b;
    cout<<__gcd(a, b)<<endl;
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

