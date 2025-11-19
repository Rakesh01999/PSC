#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;cin >> t;
    while (t--) {
        long long l, r;
        cin >> l >> r;

        if (2 * l > r) {
            cout << -1 << " " << -1 << "\n";
        } else {
            cout << l << " " << 2 * l << "\n";
        }
    }
    return 0;
}
