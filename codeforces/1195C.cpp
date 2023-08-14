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
const ll MOD = 998244353;
const double eps = 1e-12;

void solve()
{
    int n; cin >> n;

    vector<vector<ll>> a(3, vector<ll>(n, 0));
    vector<vector<ll>> f(3, vector<ll>(n, 0));

    for (int i = 0; i < n; ++i) cin >> a[1][i];
    for (int i = 0; i < n; ++i) cin >> a[2][i];

    f[0][0] = 0;
    f[1][0] = a[1][0];
    f[2][0] = a[2][0];

    for (int i = 1; i < n; ++i)
    {
        f[0][i] = max(f[1][i - 1], f[2][i - 1]);
        f[1][i] = max(f[0][i - 1], f[2][i - 1]) + a[1][i];
        f[2][i] = max(f[0][i - 1], f[1][i - 1]) + a[2][i];
    }

    cout << max(f[1][n - 1], f[2][n - 1]);
}

void setIO(string name)
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL); cout.tie(NULL);
    if (!name.size()) return;

    #ifndef ONLINE_JUDGE
        freopen((name + ".inp").c_str(), "r", stdin);
        freopen((name + ".out").c_str(), "w", stdout);
    #endif
}

int main()
{
    setIO("text");
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

