#include<bits/stdc++.h>

#define int            long long int
using namespace std;

const int N = 200005;


void solvee(vector<int> &tickets, vector<int> &customer, int N, int M) {

    map<int, int> pendingTickets;
    for (int i = 0; i < N; i++) {
        pendingTickets[tickets[i]] += 1;
    }

    for (int i = 0; i < M; i++) {
        auto it = pendingTickets.upper_bound(customer[i]);
        if (it == pendingTickets.begin()) {
            cout << -1 << "\n";
        }
        else {
            it--;
            cout << it->first << "\n";
            it->second -= 1;
            if (it->second == 0)
                pendingTickets.erase(it);
        }
    }
}

void solve(){
    int n, m;
    cin>>n>>m;
    int ans = 0;
    vector<int> a(m), vv(n);
    for(int i=0; i<n; i++){
        int tm; cin>>tm;
        vv[i] = tm;
    }
    for(int i=0; i<m; i++)  cin>>a[i];
    solvee(vv, a, n, m);
}

int32_t main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t=1;
    // cin>>t;
    while (t--) solve();
    return 0;
}
