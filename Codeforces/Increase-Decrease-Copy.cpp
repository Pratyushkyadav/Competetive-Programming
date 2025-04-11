#pragma GCC optimize("O3,inline,unroll-loops,fast-math")
#pragma GCC optimize("aggressive-loop-optimizations")
#include <bits/stdc++.h>
using namespace std;
#define inf INT_MAX
#define infl  1e15
#define pb push_back
#define el '\n'
#define NO cout << "NO" << el
#define YES cout << "YES" << el
#define all(v) begin(v), end(v)
#define sz(v) size(v)
#define FOR(i, end) for (ll i = 0; i < end; ++i)
#define FR(i, s, e) for (ll i = s; i < e; ++i)
#define fr(v) for (auto& i : v) cin >> i;
#define FORR(i, start) for (ll i = start; i >= 0; --i)
#define FRR(i, s, e) for (ll i = s; i >= e; --i)
#define rep(v, n) for (ll i = 0; i < n; ++i) cin >> v[i]
#define MOD 1000000007
#define MOD2 998244353
#define ms(v, n) memset(v, n, sizeof(v))
#define r1(a) ll a; cin >> a;
#define r2(a, b) ll a, b; cin >> a >> b;
#define r3(a, b, c) ll a, b, c; cin >> a >> b >> c;
#define r4(a, b, c, d) ll a, b, c, d; cin >> a >> b >> c >> d;
using uint = unsigned int;
using ld = long double;
using ll = long long;
using ull = unsigned long long;
using pii = pair<int, int>;
using pli = pair<long long, int>;
using vint = vector<int>;
using vc = vector<char>;
using vp = vector<pair<int, int>>;
using vll = vector<long long>;
using vvint = vector<vector<int>>;
inline bool yneos(bool a,bool upp=true){if(a){cout<<(upp?"YES\n":"Yes\n");}else{cout<<(upp?"NO\n":"No\n");}return a;}
// mt19937 rng((int)std::chrono::steady_clock::now().time_since_epoch().count());
constexpr int N = 1e3 + 1; //remember constraints dumbass

void solve () {
  r1(n);
  int a[n], b[n + 1], mn = inf;
  rep(a, n); rep(b, n + 1);
  ll res = 1;
  FOR(i, n) {
    res += abs(a[i] - b[i]);
    mn = min({mn, abs(b[n] - a[i]), abs(b[n] - b[i])});
    if (min(a[i], b[i]) <= b[n] && b[n] <= max(a[i], b[i])) {
      mn = 0;
    }
  }
  res += mn;
  cout << res << el;
}
int main () {
  ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
  int t; cin >> t;
  while (t--)
    solve();
  return 0;
}