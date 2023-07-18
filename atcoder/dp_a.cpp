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

    vector<int> h(n), f(n + 2, inf);
    for (int i = 0; i < n; ++i) cin >> h[i];

    // PUSH DP
    f[0] = 0;
    for (int i = 0; i < n; ++i)
    {
        f[i + 1] = min(f[i + 1], f[i] + abs(h[i] - h[i + 1]));
        f[i + 2] = min(f[i + 2], f[i] + abs(h[i] - h[i + 2]));
    }

    cout << f[n - 1] << '\n';

    // PULL DP
    vector<int> f2(n, inf);
    
    f2[0] = 0;
    for (int i = 1; i < n; ++i)
    {
        if (i - 1 >= 0) f2[i] = min(f2[i], f2[i - 1] + abs(h[i] - h[i - 1]));
        if (i - 2 >= 0) f2[i] = min(f2[i], f2[i - 2] + abs(h[i] - h[i - 2]));
    }
    // cout << f2[n - 1] << '\n';
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

