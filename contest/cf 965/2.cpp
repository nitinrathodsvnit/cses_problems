#include <bits/stdc++.h>
using namespace std;

using pii = pair<int, int>;

const int MAXN = 3e5 + 5;
const int MOD = 1e9 + 7;

vector<int> adj[MAXN], subval, val;
vector<pii> children;

void dfs(int node, int parent = -1) {
    for (int neighbor : adj[node]) {
        if (neighbor == parent) continue;
        dfs(neighbor, node);
    }

    children.clear();
    for (int neighbor : adj[node]) {
        if (neighbor != parent) children.emplace_back(subval[neighbor], neighbor);
    }
    sort(children.rbegin(), children.rend());  // Sort in descending order

    int weight = 1;
    for (auto {subtree_val, id} : children) {
        val[id] = weight++;
    }
    for (int neighbor : adj[node]) {
        if (neighbor != parent) subval[node] += val[neighbor] * subval[neighbor];
    }
}

void solve() {
    int N, X;
    cin >> N >> X;

    subval.assign(N, 1);
    val.assign(N, 0);
    for (int i = 0; i < N; ++i) {
        adj[i].clear();
    }

    for (int i = 0; i < N - 1; ++i) {
        int u, v;
        cin >> u >> v;
        --u;
        --v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    dfs(0);

    cout << subval[0] % MOD * X % MOD << "\n";
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}