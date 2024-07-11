#include<bits/stdc++.h>

#define int            long long int
using namespace std;

const int N = 200005;

void solve(){
    int n;
    cin>>n;
    int ans = 0;
    vector<int> arr(n), di(n);
    for(int i=0; i<n; i++){ cin>>arr[i]; cin>>di[i]; }
    sort(arr.begin(), arr.end());
    sort(di.begin(), di.end());
    int i=0, j=0, cur=0;
    while(i<n and j<n){
        if(arr[i] < di[j]){
            cur++;
            i++;
            ans = max(ans, cur);
        }else{
            j++; cur--;
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
