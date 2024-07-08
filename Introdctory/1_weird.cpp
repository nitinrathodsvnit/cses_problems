#include<bits/stdc++.h>

#define int            long long int
using namespace std;

const int N = 200005;

void solve(){
        int n; cin>>n;
        cout<<n<<" ";
        while(n!=1){
            if(n&1){
                n*=3;   n++;
            }
            else n/=2;
            cout<<n<<" ";
        }
}

int32_t main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t=1;
    // cin>>t;
    while (t--) solve();
    return 0;
}