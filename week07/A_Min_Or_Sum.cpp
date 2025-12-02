#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;

    while (t--) {
        int n;cin >> n;

        ll x, total_or = 0;

        for (int i = 0; i < n; i++) {
            cin >> x;
            total_or |= x;
        }

        cout << total_or << "\n";
    }

    
    return 0;
}
