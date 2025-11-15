
#include <bits/stdc++.h>
using namespace std;

#define ll long long

ll gcdll(ll a, ll b) {
    if(b == 0)
        return a ;
    else
        return gcdll(b, a % b);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;cin >> t;

    while (t--) {
        int n;cin >> n;

        vector<ll> a(n);

        for (int i = 0; i < n; i++)
            cin >> a[i];

        ll g1 = 0, g2 = 0;

        for (int i = 0; i < n; i++) {
            if (i % 2 == 0) g1 = gcdll(g1, a[i]);
            else g2 = gcdll(g2, a[i]);
        }

        bool ok1 = true;

        for (int i = 1; i < n; i += 2)
            if (a[i] % g1 == 0) ok1 = false;

        if (ok1) {
            cout << g1 << "\n";
            continue;
        }

        bool ok2 = true;
        for (int i = 0; i < n; i += 2)
            if (a[i] % g2 == 0)
                ok2 = false;

        if(ok2)
            cout << g2 << "\n";
        else
            cout << 0 << "\n";

    }

    return 0;
}

