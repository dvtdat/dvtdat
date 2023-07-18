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
    n *= 2;

    vector<int> a(n / 2), b;

    int tmp = n;
    for (int i = 0; i < n / 2; i += 2)
    {
        a[i] = tmp; tmp -= 2;
    }

    tmp = 2;
    for (int i = 1; i < n / 2; i += 2)
    {
        a[i] = tmp; tmp += 2;
    }

    b = a;
    reverse(b.begin(), b.end());

    for (int i : a) cout << i << ' '; cout << '\n';
    for (int i : b) cout << i - 1 << ' '; cout << '\n';
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

