#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n, k;
    cin >> n >> k;
    vector<ll> v(n);
    for (ll &x : v) cin >> x;

    while (k--) {
        ll x;
        cin >> x;

        ll l = 0, r = n - 1, ans = -1;

        while (l <= r) {
            ll mid = (l + r) / 2;
            if (v[mid] <= x) {
                ans = mid;      
                l = mid + 1;    
            } else {
                r = mid - 1;
            }
        }

        if (ans == -1) 
            cout << 0 << "\n";
        else
            cout << ans + 1 << "\n";   
    }

    return 0;
}
