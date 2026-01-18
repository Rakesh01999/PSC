#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n, t;cin >> n >> t;

    vector<ll> k(n);

    for (int i = 0; i < n; i++) {
        cin >> k[i];
    }

    ll low = 0, high = *min_element(k.begin(), k.end()) * t, answer = high;

    while (low <= high) {
        ll mid = (low + high) / 2;

        ll products = 0;
        for (ll time : k) {
            products += mid / time;
            if (products >= t)
                break;
        }

        if (products >= t) {
            answer = mid;
            high = mid - 1;  
        } else {
            low = mid + 1;   
        }
    }

    cout << answer << "\n";

    
    return 0;
}
