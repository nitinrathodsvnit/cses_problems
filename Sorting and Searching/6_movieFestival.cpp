#include<bits/stdc++.h>
// must do
#define int            long long int
using namespace std;

const int N = 200005;

void solve(){
    int n;
    cin>>n;
    int ans = 0;
    vector<pair<int, int>> v(n);
    for(int i=0; i<n; i++){
        cin>>v[i].first>>v[i].second;
    }
    sort(v.begin(), v.end(), [](pair<int, int> a, pair<int, int> b){
        return a.second < b.second;
    });
    int prev = 0;
    for(auto it: v){
        if(prev <= it.first){
            prev = it.second;
            ans++;  
        }
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
