#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;cin >> n >> m;

    multiset<ll> tickets;

    for (int i = 0; i < n; i++) {
        ll price;cin >> price;
        tickets.insert(price);
    }

    for (int i = 0; i < m; i++) {
        ll max_price;cin >> max_price;

        auto it = tickets.upper_bound(max_price);

        if (it == tickets.begin()) {
            cout << -1 << '\n';
        } else {
            --it;
            cout << *it << '\n';
            tickets.erase(it);
        }
    }

    
    return 0;
}
