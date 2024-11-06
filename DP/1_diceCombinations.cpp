#include<bits/stdc++.h>

#define int            long long int
using namespace std;

const int N = 200005;
const int mod = 1e9 + 7;

int helper(int n, vector<int>& dp){
    if(n==0)    return 1;
    if(n<0)     return 0;
    if(dp[n]!=-1)    return dp[n];
    int ans=0;
    for(int i=1; i<=6; i++){
        ans = (ans + helper(n-i, dp)%mod)%mod;
    }
    return dp[n] = ans;
}

void solve(){
    int n; cin>>n;
    vector<int> dp(n+1, -1);
    cout<<(helper(n, dp)%mod)<<endl;    
}

int32_t main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t=1; 
    while (t--) solve();
    return 0;
}