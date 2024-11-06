#include<bits/stdc++.h>
// Keywords
#define ll long long int
#define ull unsigned long long int
#define vi vector<int>
#define vll vector<ll>
#define vip vector<pair<int, int>>
#define all(x) (x).begin(), (x).end()
#define PI 3.1415926535897932384626433832
#define um unordered_map
#define dbg(x) cout<<#x<<" = "<<x<<endl
#define endl "\n"
// Fast I/O
#define fastio cin.tie(0);cout.tie(0);ios_base::sync_with_stdio(false);
using namespace std;
// Incase I/O is from file to file
void online_judge() {
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
}
//------------------------------------

ll SIZE = 2000001;
ll MOD = 1e9 + 7;
ll mod = 1e9 + 7;
vector<ll> fact(SIZE, 1);
vector<ll> inv(SIZE, 1);
ll inverse(ll i){
    if(i==1)    return 1;
    return (mod - ((mod/i)*inverse(mod%i))%mod+mod)%mod;
}


// Write solution here
void solve()
{
  ll n, r; cin >> n >> r;
  ll ans = 1, fact=1, inv1=1, inv2=1;
  for(int i=1; i<n+r; i++){
    fact= (1LL*fact*i)%MOD;
    if(i==n-1)  ans = (ans*inverse(fact))%MOD;
    if(i==r)  ans = (ans*inverse(fact))%MOD;
    if(i==n+r-1)  ans = (ans*(fact))%MOD;
  }
  cout << ans << endl;
}

//------------------------------------
int main(){
    fastio;
    ll _=1;
    while(_-->0)
        solve();
    return 0;
}