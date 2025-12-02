#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        long long a, b;
        cin >> a >> b;

        if (a == b) {
            cout << 0 << "\n";
            continue;
        }

        // find highest set bit
        int ha = 63 - __builtin_clzll(a);
        int hb = 63 - __builtin_clzll(b);

        // if b requires a higher bit than a, impossible
        if (hb > ha) {
            cout << -1 << "\n";
            continue;
        }

        vector<long long> ops;

        for (int i = 0; i <= ha; i++) {
            long long bit = 1LL << i;
            if ((a & bit) != (b & bit)) {
                ops.push_back(bit);
                a ^= bit;
            }
        }

        cout << ops.size() << "\n";
        for (auto x : ops) 
            cout << x << " ";
        cout << "\n";
    }

    return 0;
}
