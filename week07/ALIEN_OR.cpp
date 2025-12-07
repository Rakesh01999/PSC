#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;cin >> t;
    while (t--) {
        int n, k;cin >> n >> k;

        set<string> st;
        for (int i = 0; i < n; i++) {
            string s;cin >> s;
            st.insert(s);
        }

        string mask(k, '0');
        bool ok = true;

        for (int i = k - 1; i >= 0; i--) {
            mask[i] = '1';

            if (st.find(mask) == st.end()) {
                cout << "NO\n";
                ok = false;
                break;
            }

            mask[i] = '0';
        }

        if (ok) cout << "YES\n";
    }

    return 0;
}
