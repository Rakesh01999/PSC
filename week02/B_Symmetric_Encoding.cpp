#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t; cin >> t;
    while (t--) {
        int n;string s;cin >> n >> s;
        
        set<char> st(s.begin(), s.end());
        
        string r(st.begin(), st.end()); 
        
        map<char, char> mp;
        
        int m = r.size();
        for (int i = 0; i < m; i++) {
            mp[r[i]] = r[m - i - 1];
        }
        
        for (char ch : s)
            cout << mp[ch];

        cout << "\n";
    }


    return 0;
}
