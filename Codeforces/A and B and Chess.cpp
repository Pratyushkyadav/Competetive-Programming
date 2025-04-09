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
inline bool yneos(bool a,bool upp=true){if(a){cout<<(upp?"YES\n":"Yes\n");}else{cout<<(upp?"NO\n":"No\n");}return a;}
constexpr int N = 1e5 + 1;

inline int val(char c) {
  switch(c) {
    case 'q': return 9;
    case 'r': return 5;
    case 'b': return 3;
    case 'n': return 3;
    case 'p': return 1;
    default: return 0;
  }
}

void solve () {
  // ll n; cin >> n;
  // ll l, r; cin >> l >> r;
  //ll a, b, c; cin >> a >> b > >c;
  char s[10];
  int w = 0, b = 0;
  FOR(i, 8) {
    cin >> s;
    FOR(i, 8) {
      if (s[i] == '.') continue;
      if (s[i] >= 'a') {
        b += val(s[i]);
      } else {
        w += val(s[i] + 32);
      }
    }
  }
  if (w == b) cout << "Draw";
  else if (w > b) cout << "White";
  else cout << "Black";
}
int main () {
  ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
  // int t; cin >> t;
  // while (t--)
    solve();
  return 0;
}