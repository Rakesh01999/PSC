#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;

    while (t--) {
        ll n;cin >> n;

        vector<ll> A(n);

        ll sum = 0;

        for (int i = 0; i < n; i++) {
            cin >> A[i];
            sum += A[i];
        }

        if (sum % n != 0) {
            cout << "Impossible\n";
            continue;
        }

        ll mean = sum / n;
        int answer = -1;

        for (int i = 0; i < n; i++) {
            if (A[i] == mean) {
                answer = i + 1;
                break;
            }
        }

        if (answer == -1)
            cout << "Impossible\n";
        else
            cout << answer << "\n";
    }

    return 0;
}
