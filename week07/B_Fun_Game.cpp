#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int q;cin >> q;
    while (q--) {
        int n;cin >> n;
        string s, t;cin >> s >> t;

        int p = -1;

        for (int i = 0; i < n; i++) {
            if (s[i] == '1') {
                p = i;
                break;
            }
        }

        if (p == -1) {
            if (s == t)
                cout << "YES\n";
            else
                cout << "NO\n";
        } else {
            bool ok = true;
            for (int i = 0; i < p; i++) {
                if (t[i] == '1') {
                    ok = false;
                    break;
                }
            }
            if(ok)
                cout << "YES"<<"\n";
            else
                cout<< "NO"<< "\n";
        }
    }
    

    return 0;
}

