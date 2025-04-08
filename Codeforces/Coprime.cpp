#pragma GCC optimize(3,"Ofast","inline","unroll-loops")
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
bool yneos(bool a,bool upp=true){if(a){cout<<(upp?"YES\n":"Yes\n");}else{cout<<(upp?"NO\n":"No\n");}return a;}
constexpr int N = 1e5 + 1;

bool cp[1001][1001];
void getCP() {
  cp[1][1] = 1;
  for (int i = 1; i <= 1000; ++i) {
    for (int j = i + 1; j <= 1000; ++j) {
      if (gcd(i, j) == 1) cp[i][j] = cp[j][i] = 1;
    }
  }
}
void solve () { 
  ll n; cin >> n;
  // ll n, m; cin >> n >> m;
  //ll l, r; cin >> l >> r;
  //ll a, b, c; cin >> a >> b > >c;
  int last[1001] = {0}, mx = 0;
  FR(i, 1, n + 1) {
    int x; cin >> x;
    last[x] = i;
    mx = max(mx, x);
  }
  int res = -1;
  for (int i = 1; i <= mx; ++i) {
    for (int j = i; j <= mx; ++j) {
      if (last[i] && last[j] && cp[i][j]) res = max(res, last[i] + last[j]);
    }
  }
  cout << res << el;
}
int main () {
  ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
  getCP();
  int t; cin >> t;
  while (t--)
    solve();
  return 0;
}