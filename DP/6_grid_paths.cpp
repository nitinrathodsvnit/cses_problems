#include<bits/stdc++.h>

#define int            long long int
using namespace std;

const int N = 200005, mod = 1e9 + 7;

int helper(int i, int j, int n, vector<vector<int>>& dp, vector<string>& v){
    if(i==n-1 && j==n-1)    return 1;
    if(i<0 || j<0 || i>=n || j>=n)    return 0;
    if(dp[i][j]!=-1)    return dp[i][j];
    int ans=0;
    if(i<n-1 and v[i][j]!='*')    ans = (ans + helper(i+1, j, n, dp, v)%mod)%mod;
    if(j<n-1 and v[i][j]!='*')    ans = (ans + helper(i, j+1, n, dp, v)%mod)%mod;
    return dp[i][j] = ans;
}

void solve(){
    int n; cin>>n;
    vector<vector<int>> dp(n+1, vector<int>(n+1, -1));
    vector<string> v(n);
    for(int i=0; i<n; i++)    cin>>v[i];
    if(v[n-1][n-1]=='*' or v[0][0]=='*'){ cout<<0<<endl;   return;}
    cout<<helper(0, 0, n, dp, v)<<endl;
}

int32_t main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t=1; 
    while (t--) solve();
    return 0;
}