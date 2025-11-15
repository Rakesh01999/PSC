

#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);
    ll n, k; cin >> n >> k;

    vector<ll> divisors;
    for (ll i = 1; i * i <= n; i++) {
        if (n % i == 0) {
            divisors.push_back(i);
            if (i != n / i) 
                divisors.push_back(n / i);
        }
    }

    sort(divisors.begin(), divisors.end());
    
    if (k <= divisors.size()) {
        cout << divisors[k - 1] << endl ;  
    } else {
        cout << -1 << endl ;  
    }

    return 0;
}
