#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define tc     \
    ll tc;     \
    cin >> tc; \
    while (tc--)
#define pb push_back
#define mp make_pair
const ll MOD = 1e9 + 7;

void fastio()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}

ll SIZE = 2000005;
vector<ll> fact(SIZE, 1);
vector<ll> inv(SIZE, 1);
ll inverse(ll x, ll y)
{
   ll res = 1;
   while (y) {
      if (y & 1)res = (1LL * res * x) % MOD;
      y >>= 1;
      x = (1LL * x * x) % MOD;
   }
   return res;
}
void initCombinatorics()
{
   for (ll i = 2; i < SIZE; i++) {
      fact[i] = (1LL * fact[i - 1] * i) % MOD;
      inv[i] = inverse(fact[i], MOD - 2);
   }
}
ll nCr(ll n, ll r)
{
   ll res = 1;
   if (r > n) return 0;
   res = (1LL * fact[n] * inv[r]) % MOD;
   res = (1LL * res * inv[n - r]) % MOD;
   return res;
}

void solve()
{
    ll n, k; cin >> n >> k;

    cout << nCr(n, k)%MOD << endl;

    
}

int main()
{
    initCombinatorics();
    fastio();
    ll t;
    cin >> t;
    for (ll i = 1; i <= t; i++)
    {
        solve();
    }

    return 0;
}