#include<bits/stdc++.h>

#define int            long long int
using namespace std;

const int N = 200005;

int helper(int i, int j, vector<int> &v, vector<vector<int>> &dp){
    if(i > j) return 0;
    if(dp[i][j] != -1) return dp[i][j];
    int op1 = v[i] + min(helper(i+2, j, v, dp), helper(i+1, j-1, v, dp));
    int op2 = v[j] + min(helper(i+1, j-1, v, dp), helper(i, j-2, v, dp));
    return dp[i][j] = max(op1, op2);
}

void solve(){
    int n; cin>>n;
    vector<int> v(n);
    for(int i=0; i<n; i++) cin>>v[i];
    vector<vector<int>> dp(n+1, vector<int>(n+1, -1));
    cout<<helper(0, n-1, v, dp)<<endl;
}

int32_t main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t=1; 
    while (t--) solve();
    return 0;
}