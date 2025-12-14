#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;cin >> n;

    vector<ll> a(n);

    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }

    sort(a.begin(), a.end());

    int k;cin >> k;

    while(k--) {
        ll l, r;cin >> l >> r;

        int count = upper_bound(a.begin(), a.end(), r) - lower_bound(a.begin(), a.end(), l);

        cout << count << " ";
    }


    return 0;
}
