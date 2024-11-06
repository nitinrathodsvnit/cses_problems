#include<bits/stdc++.h>

#define int            long long int
using namespace std;

const int N = 200005;

const int mx = 1e6;
int Counting_Divisors[mx];
void init(){
    for(int i=1; i<=mx; i++){
        for(int j=i; j<=mx; j+=i){
            Counting_Divisors[j]++;
        }
    }
}

void solve(){
    int x; cin>>x;
    cout<<Counting_Divisors[x]<<endl;
}

int32_t main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t=1; cin>>t;
    init();
    while (t--) solve();
    return 0;
}