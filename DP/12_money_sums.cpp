#include<bits/stdc++.h>

#define int            long long int
using namespace std;

const int N = 200005;

int helper(int i, int sum, vector<int>& a, vector<vector<int>>& dp, set<int>& s){
    if(i==0){
        s.insert(sum);
        s.insert(sum+a[0]);
        return 0;
    }
    if(dp[i][sum]!=-1)    return dp[i][sum];
    int ans = helper(i-1, sum, a, dp, s);
    ans = max(ans, helper(i-1, sum+a[i], a, dp, s));
    return dp[i][sum] = ans;
}

void solve(){
    int n; cin>>n;
    vector<int> a(n);
    int sum=0;
    for(int i=0; i<n; i++) {   cin>>a[i]; sum+=a[i]; }
    vector<vector<int>> dp(n+1, vector<int>(sum+1, -1));
    set<int> s;
    sum=0;
    int x = helper(n-1, sum, a, dp, s);
    s.erase(0);
    cout<<s.size()<<endl;
    for(auto it: s){
        cout<<it<<" ";
    } 
}

int32_t main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t=1; 
    while (t--) solve();
    return 0;
}