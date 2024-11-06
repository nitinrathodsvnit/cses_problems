#include<bits/stdc++.h>

#define int            long long int
using namespace std;

const int N = 200005, mod = 1e9 + 7;

int gcdExtended(int a, int b, int *x, int *y);
 
// Function to find modulo inverse of b. It returns
// -1 when inverse doesn't
int modInverse(int b, int m)
{
    int x, y; // used in extended GCD algorithm
    int g = gcdExtended(b, m, &x, &y);
 
    // Return -1 if b and m are not co-prime
    if (g != 1)
        return -1;
 
    // m is added to handle negative x
    return (x%m + m) % m;
}
 
// Function to compute a/b under modulo m
void modDivide(int a, int b, int m)
{
    a = a % m;
    int inv = modInverse(b, m);
    if (inv == -1)
       cout << "Division not defined";
    else
       cout << (inv * a) % m;
}
 
// C function for extended Euclidean Algorithm (used to
// find modular inverse.
int gcdExtended(int a, int b, int *x, int *y)
{
    // Base Case
    if (a == 0)
    {
        *x = 0, *y = 1;
        return b;
    }
 
    int x1, y1; // To store results of recursive call
    int gcd = gcdExtended(b%a, a, &x1, &y1);
 
    // Update x and y using results of recursive
    // call
    *x = y1 - (b/a) * x1;
    *y = x1;
 
    return gcd;
}

int helper(int n, int sum, vector<vector<int>> &dp){
    if(sum == 0) return 1;
    if(n==0 || sum < 0) return 0;
    if(dp[n][sum] != -1) return dp[n][sum];
    int nonpick = helper(n-1, sum, dp)%mod, pick = 0;
    if(sum >= n) pick = helper(n-1, sum-n, dp)%mod;
    return dp[n][sum] = (pick + nonpick)%mod;
}

void solve(){
    int n; cin>>n;
    int sum = (n*(n+1))/2;
    if(sum%2 == 1) cout<<0<<endl;
    else{
        vector<vector<int>> dp(n+1, vector<int>(sum+1, -1));
        // cout<<helper(n, sum/2, dp)/2<<endl;
        modDivide(helper(n, sum/2, dp), 2, mod);
    }
    
}

int32_t main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t=1; 
    while (t--) solve();
    return 0;
}