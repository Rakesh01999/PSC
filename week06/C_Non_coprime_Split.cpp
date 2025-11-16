#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;cin >> t;
    while (t--) {
        long long l, r;cin >> l >> r;

        if (l == r) {
            long long n = l;
            bool found = false;

            for (long long d = 2; d*d <= n; d++) {
                if (n % d == 0) {
                    long long a = d;
                    long long b = n - d;
                    if (b >= 2) {
                        cout << a << " " << b << "\n";
                        found = true;
                        break;
                    }
                    long long d2 = n / d;
                    a = d2;
                    b = n - d2;
                    if (b >= 2) {
                        cout << a << " " << b << "\n";
                        found = true;
                        break;
                    }
                }
            }

            if (!found)
                cout << -1 << "\n";
            continue;
        }

        long long S = (l % 2 == 0 ? l : l + 1);
        if (S < 4)
            S = 4; 
        if (S > r) {
            cout << -1 << "\n";
            continue;
        }

        long long a = S / 2;
        long long b = S - a;
        cout << a << " " << b << "\n";

    }

    return 0;
}

