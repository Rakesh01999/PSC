#include <bits/stdc++.h>
using namespace std;
#define ll long long 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int k, n;cin >> k >> n;

    vector<ll> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    ll low = 0, high = 0;
    for (ll x : a)
        high += x;
    high /= k;  
    
    ll ans = 0;

    while (low <= high) {
        ll mid = (low + high) / 2;

        ll total = 0;
        for (ll x : a) {
            total += min(x, mid);
        }

        if (total >= mid * k) {
            ans = mid;
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    cout << ans << "\n";

    
    return 0;
}
