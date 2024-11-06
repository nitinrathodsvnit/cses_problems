#include<bits/stdc++.h>

#define int            long long int
using namespace std;

const int N = 200005;

int gcd(int a, int b){
    if(a==0)    return b;
    return gcd(b%a, a);
}

void solve(){
    int n; cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    int ans=0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(gcd(a[i],a[j])==1) ans++;
        }
    }
    cout<<ans<<endl;
    
}

int32_t main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t=1; 
    while (t--) solve();
    return 0;
}