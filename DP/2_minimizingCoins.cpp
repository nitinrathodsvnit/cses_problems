#include<bits/stdc++.h>

#define int            long long int
using namespace std;

const int N = 20000005;

int helper(int k, vector<int>& v, vector<int>& dp){
    if(k==0)    return 0;
    if(dp[k]!=-1)   return dp[k];
    int ans = INT_MAX;
    for(int i=0; i<(int)(v.size()); i++){
        if(v[i]<=k){ ans = min(ans, 1+helper(k-v[i], v, dp));}
    }
    return dp[k] = ans;
}

void solve(){
    int n, k; cin>>n>>k;
    vector<int> v(n);
    for(int i=0; i<n; i++)  cin>>v[i];
    vector<int> dp(k+1, -1);
    int ans = helper(k, v, dp);
    if(ans < INT_MAX) cout<<ans;
    else   cout<<-1;


    // vector<int> dp(k+1, 1e9);
    // dp[0] = 0;
    // for(int i=1; i<=k; i++){
    //     for(int j=0; j<n; j++){
    //         if(v[j]<=i){
    //             dp[i] = min(dp[i], dp[i- v[j]]+1);
    //         }
    //     }
    // }
    // cout<<((dp[k]<1e9)?dp[k]:-1)<<endl;
}

int32_t main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t=1; 
    while (t--) solve();
    return 0;
}