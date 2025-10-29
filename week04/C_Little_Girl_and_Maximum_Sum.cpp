#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, q;cin>>n>>q;

    vector<ll> a(n);
    for (int i = 0; i < n; ++i)
        cin >> a[i];

    vector<ll> diff(n + 2, 0);

    for (int i = 0; i < q; ++i) {
        int l, r;cin >> l >> r;
        diff[l] += 1;
        diff[r + 1] -= 1;
    }

    
    vector<ll> freq(n);
    ll cur = 0;
    for (int i = 1; i <= n; ++i) {
        cur += diff[i];
        freq[i - 1] = cur;      
    }

    sort(a.begin(), a.end());
    sort(freq.begin(), freq.end());

    ll ans = 0;
    for (int i = 0; i < n; ++i)
        ans += a[i] * freq[i];
        
    cout << ans << '\n';



    return 0;
}
