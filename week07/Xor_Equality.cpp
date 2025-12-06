#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll MOD = 1e9 + 7;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;cin >> t;

    int MAXN = 100000;
    vector<ll> pow2(MAXN + 1);
    pow2[0] = 1;

    for (int i = 1; i <= MAXN; i++) {
        pow2[i] = (pow2[i - 1] * 2) % MOD;
    }

    while (t--) {
        ll n;cin >> n;
        cout << pow2[n - 1] % MOD << "\n";
    }

    return 0;
}
