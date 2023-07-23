// 

#include <bits/stdc++.h>

using namespace std;

typedef pair<int, int> ii;
typedef pair<int, ii> iii;
typedef long long ll;
typedef long double ld;

const ll infLL = 2e18 + 7;
const int inf = 2e9 + 7;
const int maxN = 200010;
const ll MOD = 1e9 + 7;
const double eps = 1e-12;

void solve()
{
    int n; cin >> n;
    int m = n;

    n = n * (n + 1) / 2;

    if (n & 1)
    {
        cout << 0 << '\n'; return;
    }
    
    n /= 2;
    vector<vector<int>> f(m + 1, vector<int>(n + 1, 0));

    f[0][0] = 1;
    for (int i = 1; i <= m; ++i)
    {
        for (int j = 0; j <= n; ++j)
        {
            f[i][j] = f[i - 1][j];
            if (j - i >= 0) f[i][j] += f[i - 1][j - i];
            f[i][j] %= MOD;
        }
    }

    cout << f[m - 1][n] % MOD << '\n';
}

int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.inp", "r", stdin);
        freopen("output.out", "w", stdout);
    #endif
    ios_base::sync_with_stdio(0);
    cin.tie(NULL); cout.tie(NULL);
    int test = 1; //cin >> test;
    while (test--) solve();
}

//         _       _      _
//        | |     | |    | |
//      __| |_   _| |_ __| |
//     / _` \ \ / / __/ _` |
//    | (_| |\ V /| || (_| |
//     \__,_| \_/  \__\__,_|
//
//

