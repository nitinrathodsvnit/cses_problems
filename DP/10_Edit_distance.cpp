#include<bits/stdc++.h>

#define int            long long int
using namespace std;

const int N = 200005;

int helper(int i, int j, string& s1, string& s2, vector<vector<int>>& dp){
    if(i==s1.size() and j<s2.size())    return s2.size()-j;
    if(j==s2.size() and i<s1.size())    return s1.size()-i;
    if(i==s1.size() and j==s2.size())    return 0;
    if(dp[i][j]!=-1)    return dp[i][j];
    int ans = 1e9;
    if(s1[i]==s2[j])    ans = helper(i+1, j+1, s1, s2, dp);
    else{
        ans = 1 + min({helper(i+1, j, s1, s2, dp), helper(i, j+1, s1, s2, dp), helper(i+1, j+1, s1, s2, dp)});
    }
    return dp[i][j] = ans;
}

void solve(){
    string s1, s2; cin>>s1>>s2;
    int n = s1.size(), m = s2.size();
    vector<vector<int>> dp(n+1, vector<int>(m+1, -1));
    cout<<helper(0, 0, s1, s2, dp)<<endl;

    
}

int32_t main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t=1; 
    while (t--) solve();
    return 0;
}