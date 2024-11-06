#include<bits/stdc++.h>

#define int            long long int
using namespace std;

const int N = 200005, mod = 1e9 + 7;

int helper(int k, vector<int>& v, vector<int>& dp, vector<vector<int>>& s, vector<int> vv){
    if(k<0)     return 0;
    if(k==0){ s.push_back(vv);    return 1;}
    if(dp[k]!=-1)   return dp[k];
    int ans=0;
    for(int i=0; i<(int)(v.size()); i++){
        vv.push_back(v[i]);
        ans = (ans + helper(k-v[i], v, dp, s, vv)%mod)%mod;
        vv.pop_back();
    }
    return dp[k] = ans;
}
void solve(){
    int n, k; cin>>n>>k;
    vector<int> v(n);
    vector<vector<int>> s;
    for(int i=0; i<n; i++)  cin>>v[i];
    vector<int> dp(k+1, -1);
    vector<int> vv;
    int ans = helper(k, v, dp, s, vv);
    for(auto x : s){
        for(auto y : x) cout<<y<<" ";
    cout<<endl;}
    cout<<ans%mod<<endl;
}

int32_t main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t=1; 
    while (t--) solve();
    return 0;
}