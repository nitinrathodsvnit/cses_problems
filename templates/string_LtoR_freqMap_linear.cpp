void solve() {
  int n;
  cin >> n;
  vector<int> a(n);
  map<int, vector<int>> dp;
  for (int i = 0; i < n; i++) {
    cin >> a[i];
    dp[a[i] - 1].push_back(i);
  }
  int m;
  cin >> m;
  while (m--) {
    string s;
    cin >> s;
    if (s.size() == n) {
      map<char, vector<int>> mp;
      for (int i = 0; i < n; i++) {
        mp[s[i]].push_back(i);
      }
      bool yes = true;
      for (auto x : mp) {
        int k = a[x.second[0]];
        for (auto i : x.second) {
          if (a[i] != k) {
            yes = false;
            break;
          }
        }
        if (!yes) {
          break;
        }
      }
      for (auto x : dp) {
        char c = s[x.second[0]];
        for (auto i : x.second) {
          if (s[i] != c) {
            yes = false;
            break;
          }
        }
        if (!yes) {
          break;
        }
      }
      if (yes) {
        cout << "YES" << endl;
      } else {
        cout << "NO" << endl;
      }
    } else {
      cout << "NO" << endl;
    }
  }
}