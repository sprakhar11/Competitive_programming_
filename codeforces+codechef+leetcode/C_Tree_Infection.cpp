#include <bits/stdc++.h>
#define int long long
#define bigint __int128_t
#define short int32_t
#define float long double
#define all(x) x.begin(), x.end()
#define fastio                    \
    std::ios::sync_with_stdio(0); \
    std::cin.tie(NULL);           \
    std::cout.tie(NULL)
#define mod1 1000000007
#define mod2 998244353

using namespace std;

mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());

int rand(int a, int b) {
    return uniform_int_distribution<int>(a, b)(rng);
}

const int mod = mod1;

int power(int _a, int _b, int _temp_mod = mod) {
    if (_b < 0)
        return 0;
    int _res = 1;
    while (_b) {
        if (_b & 1)
            _res = (_res * _a) % _temp_mod;
        _a = (_a * _a) % _temp_mod;
        _b >>= 1;
    }
    return _res;
}

const int maxN = 2e5;
int adj[maxN];

void solve(int _test) {
    int n;
    cin >> n;
    for (int i = 0; i < n - 1; i++) {
        int temp;
        cin >> temp;
        temp--;
        adj[temp]++;
    }
    sort(adj, adj + n, greater<int>());
    set<array<int, 2>> s1, s2;
    // s2 -> infected
    // s1 -> normal
    for (int i = 0; i < n; i++) {
        if (adj[i])
            s1.insert({adj[i], i});
    }
    s1.insert({1, -1});
    int ans = 0;
    while (s1.size() || s2.size()) {
        ans++;
        set<array<int, 2>> tempset;
        for (auto& itr : s2) {
            tempset.insert({itr[0] - 1, itr[1]});
        }
        s2 = tempset;
        while (s2.size() && (*s2.begin())[0] <= 0) s2.erase(*s2.begin());
        if (s1.size()) {
            auto top = *s1.rbegin();
            s1.erase(top);
            top[0]--;
            if (top[0])
                s2.insert(top);
        } else if (s2.size()) {
            auto top = *s2.rbegin();
            s2.erase(top);
            top[0]--;
            if (top[0])
                s2.insert(top);
        }
    }
    cout << ans << '\n';
    for (int i = 0; i < n; i++) adj[i] = 0;
}

int32_t main(void) {
#ifdef LOCAL_ENV
    cout.setf(ios::unitbuf);
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    freopen("error.txt", "w", stderr);
#endif
    fastio;
    int _t = 1;
    cin >> _t;
    for (int i = 1; i <= _t; i++) {
        // cout << "Case #" << i << ": ";
        solve(i);
    }
    return 0;
}
