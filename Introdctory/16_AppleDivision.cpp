#include<bits/stdc++.h>

#define int            long long int
using namespace std;

const int N = 200005;

int helper(int i, vector<int> v, int sum1, int sum2){
    if(i<0) return abs(sum1-sum2);
    return min(helper(i-1, v, sum1+v[i], sum2), helper(i-1, v, sum1, sum2+v[i]));
}

void solve(){
    int n;  cin>>n;
    vector<int> v(n);
    for(int i=0; i<n; i++)    cin>>v[i];
    cout<<helper(n-1, v, 0, 0);
}

int32_t main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t=1;
    // cin>>t;
    while (t--) solve();
    return 0;
}
