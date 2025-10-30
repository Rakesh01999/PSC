
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;cin >> t;
    while (t--) {
        int n, q;cin >> n >> q;
        vector<ll> a(n + 1), prefix(n + 1, 0);

        for (int i = 1; i <= n; ++i) {
            cin >> a[i];
            prefix[i] = prefix[i - 1] + a[i];
        }

        ll total_sum = prefix[n];

        while (q--) {
            int l, r;
            ll k;
            cin >> l >> r >> k;

            ll range_sum = prefix[r] - prefix[l - 1];
            ll new_sum = total_sum - range_sum + (r - l + 1) * k;

            if (new_sum % 2 == 1)
                cout << "YES\n";
            else
                cout << "NO\n";
        }
    }
    return 0;
}

