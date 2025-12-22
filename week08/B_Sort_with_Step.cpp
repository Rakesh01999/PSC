#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;cin >> t;

    while(t--) {
        int n, k ;cin >> n >> k;

        vector<int> p(n + 1), pos(n + 1);

        for (int i = 1; i <= n; i++) {
            cin >> p[i];
            pos[p[i]] = i;
        }

        int bad = 0;
        for (int x = 1; x <= n; x++) {
            if (pos[x] % k != x % k) {
                bad++;
            }
        }

        if (bad == 0)
            cout << 0 << "\n";
        else if (bad == 2)
            cout << 1 << "\n";
        else
            cout << -1 << "\n";

    }

    
    return 0;
}
