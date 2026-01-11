#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string recipe;cin >> recipe;

    ll nb, ns, nc;cin >> nb >> ns >> nc;

    ll pb, ps, pc;cin >> pb >> ps >> pc;

    ll r;cin >> r;

    ll needB = 0, needS = 0, needC = 0;
    
    for (char c : recipe) {
        if (c == 'B') needB++;
        else if (c == 'S') needS++;
        else if (c == 'C') needC++;
    }

    ll low = 0, high = 1e13, ans = 0;

    while (low <= high) {
        ll mid = (low + high) / 2;

        ll buyB = max(0LL, needB * mid - nb);
        ll buyS = max(0LL, needS * mid - ns);
        ll buyC = max(0LL, needC * mid - nc);

        ll cost = buyB * pb + buyS * ps + buyC * pc;

        if (cost <= r) {
            ans = mid;
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    cout << ans << "\n";
    
    
    return 0;
}
