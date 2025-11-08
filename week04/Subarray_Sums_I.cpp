#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    ll x;
    cin >> n >> x;
    vector<ll> a(n);
    for (int i = 0; i < n; ++i)
        cin >> a[i];

    ll count = 0, current_sum = 0;
    int l = 0;

    for (int r = 0; r < n; r++) {
        current_sum += a[r];

        while (current_sum > x && l <= r) {
            current_sum -= a[l];
            l++;
        }

        if (current_sum == x)
            count++;
    }

    cout << count << "\n";


    
    return 0;
}
