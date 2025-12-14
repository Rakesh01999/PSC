#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    ll n, k;cin >> n >> k;
    vector<ll> v(n);
    for(int i=0;i<n;i++) 
        cin >> v[i];

    while(k--) {
        ll x;cin >> x;

        ll l = 0, r = n - 1, ans = n;  
        
        while(l <= r) {
            ll m = (l + r) / 2;

            if (v[m] >= x) {
                ans = m;     
                r = m - 1;
            } else {
                l = m + 1;
            }
        }

        cout << ans + 1 << "\n";   

    }

    return 0;
}
