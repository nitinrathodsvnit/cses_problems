#include<bits/stdc++.h>

#define int            long long int
using namespace std;

const int N = 200005;

int helper(int a, int b, vector<vector<int>>& dp){
    if(a<=0 or b<=0)    return 1e9;
    if(a==b)    return 0;
    if(dp[a][b]!=-1)    return dp[a][b];
    int ans=1e9;
    for(int i=1; i<=a/2; i++){
        ans = min(ans, 1+helper(i, b, dp)+helper(a-i, b, dp));
    }
    for(int i=1; i<=b/2; i++){
        ans = min(ans, 1+helper(a, i, dp)+helper(a, b-i, dp));
    }
    return dp[a][b] = ans;

}

void solve(){
    int a, b; cin>>a>>b;
    vector<vector<int>> dp(a+1, vector<int>(b+1, -1));
    cout<<helper(a, b, dp)<<endl;
}

int32_t main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t=1;    
    while (t--) solve();
    return 0;
}