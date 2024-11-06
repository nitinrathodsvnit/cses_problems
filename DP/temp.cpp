#include <bits/stdc++.h>
// Keywords
#define ll long long int
#define ull unsigned long long int
#define vi vector<int>
#define vll vector<ll>
#define vip vector<pair<int, int>>
#define all(x) (x).begin(), (x).end()
#define PI 3.1415926535897932384626433832
#define um unordered_map
#define dbg(x) cout << #x << " = " << x << endl
#define endl "\n"
// Fast I/O
#define fastio                                                                 \
  cin.tie(0);                                                                  \
  cout.tie(0);                                                                 \
  ios_base::sync_with_stdio(false);
using namespace std;
// Incase I/O is from file to file
void online_judge() {
#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif
}
//_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-

vll d3(200001, 0);
vll prefix(200001, 0);
void build() {
  for(ll i=1; i<=200000; i*=3)  d3[i]++;
  for(ll i=1; i<=200000; i++)    prefix[i] = prefix[i-1] + d3[i];
}

// Write solution here
void solve() {
  ll l, r;
  cin >> l >> r;
  ll ans = 0;
  for (ll i = l; i <= r; i++) {
    ans += prefix[i];
  }
  cout << ans + prefix[l] << endl;
}

//_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-
int main() {
  fastio;
  // online_judge();
  ll _ = 1;
  build();
  cin >> _;
  while (_-- > 0)
    solve();
  return 0;
}
