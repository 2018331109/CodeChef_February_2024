#include<bits/stdc++.h>
using namespace std;
#define int long long int
const int INF = 1e18;
const int N = 1e5 + 5;

int n, m, x, y, j;
int ans = 0;

map<int, map<int, int>> visited;

int call(int x, int y)
{
    // Check if the cell is out of bounds or already visited
    if (x < 1 || x > n || y < 1 || y > m || visited[x][y])
    {
        return 0;
    }

    // Mark the cell as visited
    visited[x][y] = 1;

    // Count the current cell and explore in all four directions
    int cnt = 1;
    cnt += call(x - j, y);
    cnt += call(x + j, y);
    cnt += call(x, y - j);
    cnt += call(x, y + j);

    return cnt;
}

void solve()
{
    cin >> n >> m >> x >> y >> j;
    //visited.clear(); // Clear the visited map for each test case
    //ans = call(x, y);
    int xx=(x-1)/j+(n-x)/j+1;
    int yy=(y-1)/j+(m-y)/j+1;
    cout<<xx*yy<<endl;

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

