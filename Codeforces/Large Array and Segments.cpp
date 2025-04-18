#pragma GCC optimize("O3,inline,unroll-loops,fast-math")
#pragma GCC optimize("aggressive-loop-optimizations")
#include <bits/stdc++.h>
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
#define rall(v) rbegin(v), rend(v)
#define sz(v) size(v)
#define FOR(i, end) for (ll i = 0; i < end; ++i)
#define FR(i, s, e) for (ll i = s; i < e; ++i)
#define FO(i, s, e, jump) for (ll i = s; i < e; i += jump)
#define F0(i, s, e, jump) for (ll i = s; i >= e; i += jump)
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
using vs = vector<string>;
using vp = vector<pair<int, int>>;
using vpli = vector<pli>;
using vll = vector<long long>;
using vvint = vector<vector<int>>;
using str = string;
inline bool yneos(bool a,bool upp=true){if(a){cout<<(upp?"YES\n":"yes\n");}else{cout<<(upp?"NO\n":"no\n");}return a;}
// mt19937 rng((int)std::chrono::steady_clock::now().time_since_epoch().count());
constexpr int N = 1e5 + 1; //remember constraints dumbass
constexpr int lim = 31623;

void solve () {
  r3(n, k, x);
  int a[n]; rep(a, n);
  ll p[n + 1]; p[n] = 0;
  FORR(i, n - 1) p[i] = p[i + 1] + a[i];
  ll sum = p[0];
  if (sum * k < x) {
    cout << 0 << el;
    return;
  }
  ll l = 1, r = n * k;
  while (l <= r) {
    ll m = (l + r) / 2;
    int cnt = (n * k - m + 1) / n, rem = (n * k - m + 1) % n;
    ll curr = cnt * sum;
    curr += p[n - rem];
    if (curr < x) r = m - 1;
    else l = m + 1;
  }
  cout << r << el;
}

int main () {
  ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
  int t; cin >> t;
  while (t--)
    solve();
  return 0;
}