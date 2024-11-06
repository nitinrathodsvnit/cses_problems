#include<bits/stdc++.h>

#define int            long long int
using namespace std;

const int N = 200005;

int diff(int mid, int n, int k){
    return abs(((1LL*mid*(mid+1))/2 + 1LL*(mid+1)*k) - ((1LL*(n)*(n-1))/2 - (1LL*mid*(mid+1))/2 + 1LL*(n-mid-1)*k));
}


void solve(){
    vector<int> v;
    for(int i=1; i<6; i++) v.push_back(i);
    vector<int> ori = v;
    for(int i=0; i<100; i++){
        for(auto it: v) cout<<it<<" ";
        cout<<endl;
        next_permutation(v.begin(), v.end());
    }
}

int32_t main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t=1; 
    //cin>>t;
    while (t--) solve();
    return 0;
}