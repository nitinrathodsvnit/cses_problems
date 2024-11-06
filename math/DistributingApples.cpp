#include<bits/stdc++.h>

#define int            long long int
using namespace std;

const int N = 200005, mod = 1e9 + 7;

// Function to calculate modular inverse of a number
int inverse(int i){
    if(i<=0)    return 1;
    return (mod - ((mod/i)*inverse(mod%i))%mod+mod)%mod;
}

int facto[2000005];
void intiFacto(){
    facto[0]=1; facto[1]=1;
    for(int i=2; i<2000005; i++){
        facto[i] = (facto[i-1]*i)%mod;
    }
}

void solve(){
    int n, r; cin>>n>>r;
    int ans = facto[n+r-1];
    ans = (ans*inverse(facto[r]))%mod;
    ans = (ans*inverse(facto[n-1]))%mod;
    cout<<ans<<endl;
    
}

int32_t main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    intiFacto();
    int t=1; 
    while (t--) solve();
    return 0;
}