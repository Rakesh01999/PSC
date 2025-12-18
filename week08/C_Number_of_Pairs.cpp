#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;cin >> t;

    while(t--) {
        int n;ll l, r;cin >> n >> l >> r;
        vector<ll> a(n);

        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        sort(a.begin(), a.end());

        ll ans = 0;

        for (int i = 0; i < n; i++) {
            ll low = l - a[i];
            ll high = r - a[i];

            int left = lower_bound(a.begin() + i + 1, a.end(), low) - a.begin();

            int right = upper_bound(a.begin() + i + 1, a.end(), high) - a.begin();

            ans += (right - left);
        }

        cout << ans << '\n';

    }

    
    return 0;
}
