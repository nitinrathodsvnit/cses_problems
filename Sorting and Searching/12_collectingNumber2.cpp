#include<bits/stdc++.h>
#define int            long long int
using namespace std;
// must do
const int N = 200005;

void solve(){
    int n, m, ans=1;  cin>>n>>m;
    vector<pair<int, int>> a(n);
    for(int i=0; i<n; i++){  cin>>a[i].first;    a[i].second = i;}
    sort(a.begin(), a.end());
    for(int i=1; i<n; i++){
        if(a[i].second<a[i-1].second)   ans++;
    }
    for(int i=0; i<m; i++){
        int x, y;  cin>>x>>y;
    }
    cout<<ans<<endl;
}

int32_t main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t=1;
    // cin>>t;
    while (t--) solve();
    return 0;
}
