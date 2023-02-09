// 

#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma")
#pragma GCC optimize("unroll-loops")

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

int pre[40], cnt[40];

void solve()
{
    memset(pre, 0, sizeof pre);
    memset(cnt, 0, sizeof cnt);

    int n; cin >> n;
    string s; cin >> s;

    for (int i = 0; i < n; ++i) cnt[s[i] - 'a']++;

    int res = 0;

    for (int i = 0; i < n; ++i)
    {
        cnt[s[i] - 'a']--; pre[s[i] - 'a']++;
        int tmp = 0;
        for (int i = 0; i < 30; ++i) 
        {
            tmp += min(1, cnt[i]) + min(1, pre[i]);
        }
        res = max(res, tmp);
    }
    cout << res << '\n';
}

int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.inp", "r", stdin);
        freopen("output.out", "w", stdout);
    #endif
    ios_base::sync_with_stdio(0);
    cin.tie(NULL); cout.tie(NULL);
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

