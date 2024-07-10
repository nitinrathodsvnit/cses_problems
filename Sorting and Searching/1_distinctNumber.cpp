#include<bits/stdc++.h>

#define int            long long int
using namespace std;

const int N = 200005;


void solve(){
    int n;  cin>>n;
    set<int> s;
    for(int i=0; i<n; i++){
        int x;  cin>>x;
        s.insert(x);
    }
    cout<<s.size()<<"\n";
}

int32_t main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t=1;
    // cin>>t;
    while (t--) solve();
    return 0;
}
