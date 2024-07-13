#include<bits/stdc++.h>
#define int            long long int
using namespace std;
const int N = 200005;

void solve(){
    int n, ans=0;  cin>>n;
    vector<int> a(n);
    for(int i=0; i<n; i++)  cin>>a[i];
    int i=0, j=0;
    map<int, int> mp;
    while(i<n and j<n){
        mp[a[i]]++;
        while(i-j+1 > mp.size()){
            mp[a[j]]--;
            if(mp[a[j]]==0){ mp.erase(a[j]);}
            j++;
        }
        ans = max(ans, i-j+1);
        i++;
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
