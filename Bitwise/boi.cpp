#include<bits/stdc++.h>

#define int            long long int
using namespace std;

const int N = 1e9+7;

// for long long use 59 bits
// for int use 0-30 bits


// The bits in a integer number, n  is 1 + log2(n) ,


// number to binary string
string to_binary(int x) {
	string s;
	while(x > 0) {
		s += (x % 2 ? '1' : '0');
		x /= 2;
	}
	reverse(s.begin(), s.end());
	return s;
}

// binary string to number
int to_int(string s) {
    int x = 0;
    for(int i = 0; i < s.size(); i++) {
        x = x * 2 + (s[i] - '0');
    }
    return x;
}



void solve(){
    int n, k, total = 0;  cin>>n>>k;
    string s1, s2;  cin>>s1>>s2;
        vector<vector<int>> freq1(n, vector<int>(26, 0)), freq2(n, vector<int>(26, 0));
        for(int i=0; i<n; i++){
            freq1[i][s1[i]-'a']++;
            freq2[i][s2[i]-'a']++;
        }
        for(int j=0; j<k; j++){
            int l, r;  cin>>l>>r;
            l--; r--;
            total=0;
            vector<int> temp1(27, 0), temp2(27, 0);
                for(int j=0; j<26; j++){
                    temp1[j] = freq1[r][j] - freq1[l][j];
                    temp2[j] = freq2[r][j] - freq2[l][j];
                    total += max((int)0, (int)(temp1[j] - temp2[j]));
                }
            cout<<total<<endl;
        }
    }

int32_t main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t=1; 
    cin>>t;
    while (t--) solve();
    return 0;
}