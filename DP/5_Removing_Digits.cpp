#include<bits/stdc++.h>

#define int            long long int
using namespace std;

const int N = 200005;

int helper(int n, vector<int>& dp){
    if(n==0)    return 0;
    if(n<0)     return 1e9;
    if(dp[n]!=-1)    return dp[n];
    int ans=1e9;
    string s = to_string(n);
    for(int i=0; i<s.length(); i++){
        if(s[i]=='0')    continue;
        ans = min(ans, 1 + helper(n - (int)(s[i] - '0'), dp));
    }
    return dp[n] = ans;
}

void solve(){
    int n; cin>>n;
    vector<int> dp(n+1, -1);
    cout<<helper(n, dp)<<endl;
}

int32_t main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t=1; 
    while (t--) solve();
    return 0;
}