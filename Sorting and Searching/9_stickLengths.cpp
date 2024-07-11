#include<bits/stdc++.h>
#define int            long long int
using namespace std;
// must do
const int N = 200005;

void solve(){
    int n;  cin>>n;
    vector<int> a(n);
    for(int i=0; i<n; i++)  cin>>a[i];
    sort(a.begin(), a.end());
    int ans = 0, mid = a[n/2];
    for(int i=0; i<n; i++){
        ans += abs(a[i] - mid);
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
