#include<bits/stdc++.h>

#define int            long long int
using namespace std;

const int N = 200005;


void solve(){
    int n, k; cin>>n>>k;
    int fpos=-1;
    vector<int> h(n), d(n);
    for(int i=0; i<n; i++) cin>>h[i];
    for(int i=0; i<n; i++){ 
        cin>>d[i]; 
        if(d[i]>0 and fpos==-1) fpos=i; 
        d[i] = abs(d[i]);
    }
    int i=fpos-1, j=fpos, ans=0, prev=0;
    // cout<<i<<" "<<j<<"  ";
    while(i>=0 and j<n){
        ans = (min(d[i], d[j]))*k - prev;
        int curTotal=0;
        if(d[i]==d[j]){
            curTotal = h[i]+h[j];
            i--; j++;
        }else if(d[i]>d[j]){
            curTotal = h[j];
            j++;
        }else{
            curTotal = h[i];
            i--;
        }
        if(curTotal>ans){cout<<"NO"<<endl; return;}
        prev += curTotal;
    }
    while(i>=0){
        ans = d[j]*k - prev;
        int curTotal = h[i];
        if(curTotal>ans){cout<<"NO"<<endl; return;}
        prev += curTotal;
        i--;
    }
    while(j<n){
        ans =  d[j]*k - prev;
        int curTotal = h[j];
        if(curTotal>ans){cout<<"NO"<<endl; return;}
        prev += curTotal;
        j++;
    }
    cout<<"YES"<<endl;
}

int32_t main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t=1;
    cin>>t;
    while (t--) solve();
    return 0;
}
