
#include <bits/stdc++.h>
using namespace std;

int solveForChar(const string &s, char c) {
    int l = 0, r = (int)s.size() - 1;
    int deletions = 0;

    while (l < r) {
        if (s[l] == s[r]) {
            l++; r--;
        } else if (s[l] == c) {
            l++; deletions++;
        } else if (s[r] == c) {
            r--; deletions++;
        } else {
            return INT_MAX; 
        }
    }
    return deletions;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;cin >> t;
    while (t--) {
        int n;
        string s;cin >> n >> s;

        int ans = INT_MAX;
        for (char c = 'a'; c <= 'z'; c++) {
            ans = min(ans, solveForChar(s, c));
        }

        if (ans == INT_MAX) cout << -1 << "\n";
        else cout << ans << "\n";
    }
    return 0;
}
