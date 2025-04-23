#pragma GCC optimize("O3,inline,unroll-loops,fast-math")
#pragma GCC optimize("aggressive-loop-optimizations")
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
#define inf INT_MAX
#define infl  1e18
#define pb push_back
#define F first
#define S second
#define el '\n'
#define NO cout << "NO" << el
#define YES cout << "YES" << el
#define all(v) begin(v), end(v)
#define sall(v) v, v + n
#define rall(v) rbegin(v), rend(v)
#define sz(v) size(v)
#define FOR(i, end) for (ll i = 0; i < end; ++i)
#define FORR(i, start) for (ll i = start; i >= 0; --i)
#define FR(i, s, e) for (ll i = s; i < e; ++i)
#define FRR(i, s, e) for (ll i = s; i >= e; --i)
#define FO(i, s, e, jump) for (ll i = s; i < e; i += jump)
#define F0(i, s, e, jump) for (ll i = s; i >= e; i += jump)
#define fr(v) for (auto& i : v) cin >> i;
#define rep(v, n) for (ll i = 0; i < n; ++i) cin >> v[i]
#define MOD 1000000007
#define MOD2 998244353
#define ms(v, n) memset(v, n, sizeof(v))
#define r1(a) ll a; cin >> a;
#define r2(a, b) ll a, b; cin >> a >> b;
#define r3(a, b, c) ll a, b, c; cin >> a >> b >> c;
#define r4(a, b, c, d) ll a, b, c, d; cin >> a >> b >> c >> d;
#define s1(s) string s; cin >> s;
#define s2(s, t) string s, t; cin >> s >> t;
using uint = unsigned int;
using ld = long double;
using ll = long long;
using ull = unsigned long long;
using pii = pair<int, int>;
using pli = pair<long long, int>;
using vint = vector<int>;
using vc = vector<char>;
using vs = vector<string>;
using vp = vector<pair<int, int>>;
using vpli = vector<pli>;
using vll = vector<long long>;
using vvint = vector<vector<int>>;
using str = string;
using oset =  tree< int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update>;
using omap =  tree< int, int, less<int>, rb_tree_tag, tree_order_statistics_node_update>;
template<typename T, typename U> constexpr inline void cmin(T& a, U b) { a = a < b ? a : b;}
template<typename T, typename U> constexpr inline void cmax(T& a, U b) { a = a > b ? a : b;}
constexpr inline bool yneos(bool a, bool upp=true){if(a){cout<<(upp?"YES\n":"yes\n");}else{cout<<(upp?"NO\n":"no\n");}return a;}
// mt19937 rng((int)std::chrono::steady_clock::now().time_since_epoch().count());
constexpr int N = 1e5 + 1; //remember constraints dumbass
constexpr int lim = 31623;

void solve () {
  r2(l, r);
  l += (l & 1);
  if (l + 2 <= r) {
    cout << l << ' ' << l + 1 << ' ' << l + 2 << el;
  } else {
    cout << -1 << el;
  }
}
int main () {
  ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
  cout << fixed << setprecision(10);
  // int t; cin >> t;
  // while (t--)
    solve();
  return 0;
}