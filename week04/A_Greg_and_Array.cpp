#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n, m, k;cin >> n >> m >> k;

    vector<ll> a(n + 1);
    for (ll i = 1; i <= n; i++) 
        cin >> a[i];

    vector<ll> l(m + 1), r(m + 1), d(m + 1);
    for (ll i = 1; i <= m; i++) 
        cin >> l[i] >> r[i] >> d[i];

    vector<ll> op_count(m + 2, 0);
    for (ll i = 0; i < k; i++) {
        ll x, y; cin >> x >> y;
        op_count[x]++;
        op_count[y + 1]--;
    }

    for (ll i = 1; i <= m; i++) {
        op_count[i] += op_count[i - 1]; 
    }

    vector<ll> diff(n + 2, 0);
    for (ll i = 1; i <= m; i++) {
        long long total = (long long)d[i] * op_count[i];
        diff[l[i]] += total;
        diff[r[i] + 1] -= total;
    }

    for (ll i = 1; i <= n; i++) {
        diff[i] += diff[i - 1];
        a[i] += diff[i];
    }

    for (ll i = 1; i <= n; i++) cout << a[i] << " ";
    cout << "\n";

    return 0;
}
