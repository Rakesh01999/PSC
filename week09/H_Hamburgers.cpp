#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string recipe;
    cin >> recipe;

    ll nb, ns, nc;cin >> nb >> ns >> nc;

    ll pb, ps, pc;cin >> pb >> ps >> pc;

    ll r;cin >> r;

    ll needB = 0, needS = 0, needC = 0;
    for (char ch : recipe) {
        if (ch == 'B') needB++;
        else if (ch == 'S') needS++;
        else if (ch == 'C') needC++;
    }

    auto canMake = [&](ll k) {
        ll bread = max(0LL, needB * k - nb);
        ll sausage = max(0LL, needS * k - ns);
        ll cheese = max(0LL, needC * k - nc);
        ll cost = bread * pb + sausage * ps + cheese * pc;
        return cost <= r;
    };

    ll lo = 0, hi = 1e13, ans = 0;
    while (lo <= hi) {
        ll mid = (lo + hi) / 2;
        if (canMake(mid)) {
            ans = mid;
            lo = mid + 1;
        } else {
            hi = mid - 1;
        }
    }

    cout << ans << "\n";
    return 0;
}
