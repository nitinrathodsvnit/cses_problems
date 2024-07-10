#include<bits/stdc++.h>

#define int            long long int
using namespace std;

const int N = 200005;


void solve(){
    int n, m, k;
    cin>>n>>m>>k;
    int ans = 0;
    vector<int> app(n), apt(m);
    for(int i=0; i<n; i++) cin>>app[i];
    for(int i=0; i<m; i++) cin>>apt[i];
    sort(app.begin(), app.end());
    sort(apt.begin(), apt.end());
    int j=0;
    for(int i=0; i<n; i++){
        while(j<m and app[i]-apt[j]>k){
            j++;
        }
        if(j<m and abs(app[i]-apt[j])<=k){j++; ans++;}
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
