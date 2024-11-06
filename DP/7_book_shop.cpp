#include<bits/stdc++.h>

#define int            long long int
using namespace std;

const int N = 200005;

int helper(int i, int total, vector<int>& price, vector<int>& pages, vector<vector<int>>& dp){
    if(i<0 or total==0)    return 0;
    if(dp[i][total]!=-1)    return dp[i][total];
    int ans = helper(i-1, total, price, pages, dp);
    if(total-price[i]>=0)    ans = max(ans, helper(i-1, total-price[i], price, pages, dp) + pages[i]);
    return dp[i][total] = ans;
}


void solve(){
    int n, total; cin>>n>>total;
    vector<int> price(n), pages(n);
    for(int i=0; i<n; i++)    cin>>price[i];
    for(int i=0; i<n; i++)    cin>>pages[i];
    vector<vector<int>> dp(n+1, vector<int>(total+1, -1));
    cout<<helper(n-1, total, price, pages, dp)<<endl;
    
}

int32_t main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t=1; 
    while (t--) solve();
    return 0;
}