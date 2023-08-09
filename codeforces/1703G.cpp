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
    ll n, k; cin >> n >> k;

    vector<ll> a(n + 1);
    vector<ll> f(n + 1, 0);

    for (ll i = 1; i <= n; ++i) cin >> a[i];

    f[0] = 0;
    ll res = 0;
    for (ll i = 0; i <= n; ++i)
    {
        if (i > 0) f[i] = f[i - 1] + a[i] - k;
        ll tmp = 0;
        for (ll j = 1; i + j <= min(n, i + 32); ++j)
        {
            tmp += a[i + j] >> j;
            // cout << (a[i + j] >> j) << ' ';
        }
        // cout << tmp + f[i] << '\n';
        res = max(res, tmp + f[i]);
    }

    cout << res << '\n';
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
    int test; cin >> test;
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

