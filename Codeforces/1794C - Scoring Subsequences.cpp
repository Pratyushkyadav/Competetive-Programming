//<---------- Author - Pratyushdumdumb ----------->
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
#define eb emplace_back
#define pob pop_back
#define lb lower_bound
#define ub upper_bound
#define F first
#define S second
#define el '\n'
#define bits(n) __builtin_popcount(n)
#define all(v) v.begin(), v.end()
#define sall(v) v, v + n
#define rall(v) v.rbegin(), v.rend()
#define sz(v) v.size()
#define FOR(i, end) for (int i = 0; i < end; ++i)
#define FORR(i, start) for (int i = start; i >= 0; --i)
#define FR(i, s, e) for (int i = s; i < e; ++i)
#define FRR(i, s, e) for (int i = s; i >= e; --i)
#define FO(i, s, e, jump) for (int i = s; i < e; i += jump)
#define F0(i, s, e, jump) for (int i = s; i >= e; i += jump)
#define fr(v) for (auto& i : v) cin >> i
#define rep(v, n) for (int i = 0; i < n; ++i) cin >> v[i]
#define MOD 1000000007
#define MOD2 998244353
#define ms(v, n) memset(v, n, sizeof(v))
#define r1(a) int a; cin >> a
#define r2(a, b) int a, b; cin >> a >> b
#define r3(a, b, c) int a, b, c; cin >> a >> b >> c;
#define r4(a, b, c, d) int a, b, c, d; cin >> a >> b >> c >> d
#define l1(a) ll a; cin >> a
#define l2(a, b) ll a, b; cin >> a >> b
#define l3(a, b, c) ll a, b, c; cin >> a >> b >> c
#define l4(a, b, c, d) ll a, b, c, d; cin >> a >> b >> c >> d
#define s1(s) string s; cin >> s
#define s2(s, t) string s, t; cin >> s >> t
#define c1(a) cout << a << el
#define c2(a, b) cout << a << ' ' << b << el
#define c3(a, b, c) cout << a << ' ' << b << ' ' << c << el;
#define ca(a, n) for (int i = 0; i < n; ++i) cout << a[i] << ' '
#define cv(v) for (auto& x : v) cout << x << ' '
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
using vb = vector<bool>;
using str = string;
struct custom_hash {
  static uint64_t splitmix64(uint64_t x) {
      x += 0x9e3779b97f4a7c15;
      x = (x ^ (x >> 30)) * 0xbf58476d1ce4e5b9;
      x = (x ^ (x >> 27)) * 0x94d049bb133111eb;
      return x ^ (x >> 31);
  }
  size_t operator()(uint64_t x) const {
      static const uint64_t FIXED_RANDOM = chrono::steady_clock::now().time_since_epoch().count();
      return splitmix64(x + FIXED_RANDOM);
  }
};
template<typename T>  using oset =  tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
template<typename T, typename U>  using omap =  tree<T, U, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
template<typename T> using gset = gp_hash_table<T, null_type, custom_hash, equal_to<T>, direct_mask_range_hashing<T>, linear_probe_fn<>,
hash_standard_resize_policy<hash_exponential_size_policy<>, hash_load_check_resize_trigger<true>, true>>;
template<typename T, typename U> using gmap = gp_hash_table<T, U, custom_hash, equal_to<T>, direct_mask_range_hashing<T>, linear_probe_fn<>,
hash_standard_resize_policy<hash_exponential_size_policy<>, hash_load_check_resize_trigger<true>, true>>;
template<typename T, typename U> constexpr inline void cmin(T& a, U b) { a = a < b ? a : b;}
template<typename T, typename U> constexpr inline void cmax(T& a, U b) { a = a > b ? a : b;}
inline bool yneos(bool a, bool upp=true){if(a){cout<<(upp?"YES\n":"yes\n");}else{cout<<(upp?"NO\n":"no\n");}return a;}
inline void game(bool a) {if (a) cout << "First" << el; else cout << "Second" << el;}
// mt19937 rng((int)std::chrono::steady_clock::now().time_since_epoch().count());
constexpr int N = 1e6 + 1; //remember constraints dumbass
constexpr int lim = 31623;
//<------------- Solution --------------->

void solve () {
  r1(n);
  int a[n]; rep(a, n);
  int l = 0;
  FOR(r, n) {
    while (a[l] < r - l + 1) l++;
    cout << r - l + 1 << ' ';
  }
  cout << el;
}

int main () {
  ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
  cout << fixed << setprecision(12);
  int t; cin >> t;
  while (t--)
    solve();
  return 0;
}