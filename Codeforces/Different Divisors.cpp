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
#define FOR(i, end) for (int i = 0; i < end; ++i)
#define FR(i, s, e) for (int i = s; i < e; ++i)
#define fr(v) for (auto& i : v) cin >> i;
#define FORR(i, start) for (int i = start; i >= 0; --i)
#define FRR(i, s, e) for (int i = s; i >= e; --i)
#define rep(v, n) for (int i = 0; i < n; ++i) cin >> v[i]
#define MOD 1000000007
#define MOD2 998244353
#define ms(v, n) memset(v, n, sizeof(v))
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
constexpr int N = 1e5 + 1; //remember constraints dumbass

bitset<N> np;
vector<int> p;
void sieve() {
  np[0] = np[1] = 1;
  for (ll i = 2; i <= N; ++i) {
    if (np[i]) continue;
    p.pb(i);
    for (ll j = i * i; j <= N; j += i) {
      np[j] = 1;
    }
  }
}

void solve () {
  ll n; cin >> n;
  //ll l, r; cin >> l >> r;
  //ll a, b, c, d; cin >> a >> b >> c >> d;
  int x = 0, y = 0, i = 0;
  while (x == 0) {
    if (p[i] - 1 >= n) x = p[i];
    i++;
  }
  while (y == 0) {
    if (p[i] - x >= n) y = p[i];
    i++;
  } 
  cout << x * 1ll * y << el;
}
int main () {
  ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
  sieve();
  int t; cin >> t;
  while (t--)
    solve();
  return 0;
}