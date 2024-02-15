#include<bits/stdc++.h>
using namespace std;
#define int long long
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define neg cout << -1 << endl;
#define pb push_back
const int INF=1e18;
const int N=1e6;
vector<int>primes;

void sieve_of_eratosthenes(int n)
{
    bool is_prime[n + 1];
    memset(is_prime, true, sizeof(is_prime));
    is_prime[0] = is_prime[1] = false;
    for (int p = 2; p * p <= n; p++)
    {
        if (is_prime[p])
        {
            for (int i = p * p; i <= n; i += p)
            {
                is_prime[i] = false;
            }
        }
    }
    for (int i = 2; i <= n; i++)
    {
        if (is_prime[i])
        {
            primes.pb(i);
        }
    }
}

void solve()
{
    int n;
    cin>>n;
    if(n==1)
    {
        cout<<1<<endl;
        return;
    }
    if(n%2==0)
    {
        if(n==2)
        {
            cout<<2<<" "<<2<<endl;
            return;
        }
        cout<<1<<" ";
        n-=1;
        int i=0;
        while(n-2>=3)
        {
            n-=2;
            cout<<primes[i]<<" "<<primes[i]<<" ";
            i++;
        }

        cout<<4<<" "<<4<<" "<<4<<endl;
        return;
    }

    //cout<<"fuck"<<endl;

    cout<<1<<" ";
    n-=1;
    int i=0;
    while(n>0)
    {
        n-=2;
        cout<<primes[i]<<" "<<primes[i]<<" ";
        i++;
    }

    cout<<endl;
}


signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    sieve_of_eratosthenes(N);

    int test = 1;
    cin >> test;

    for (int tc = 1; tc <= test; tc++)
    {
        solve();
    }

    return 0;
}

