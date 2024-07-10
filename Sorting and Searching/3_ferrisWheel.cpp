#include<bits/stdc++.h>

#define int            long long int
using namespace std;

const int N = 200005;


void solve(){
    int n, x;
    cin>>n>>x;
    int ans = 0;
    vector<int> app(n);
    for(int i=0; i<n; i++) cin>>app[i];
    sort(app.begin(), app.end());
    int i=0, j=n-1;
    while(i<j){
        if(app[i]+app[j] > x){
            j--;
            ans++;
        }else{
            ans++;j--; i++;
        }
    }
    if(i==j)    ans++;
    cout<<ans<<endl;
}

int32_t main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t=1;
    // cin>>t;
    while (t--) solve();
    return 0;
}
