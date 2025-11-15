#include <bits/stdc++.h>
using namespace std;

#define ll long long

ll gcdll(ll a, ll b) {
    if(b == 0)
        return a;
    else
        return gcdll(b, a % b);
}

ll lcmll(ll a, ll b) {
    return ( a*b ) / gcdll(a, b);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n, a, b, p, q;cin >> n >> a >> b >> p >> q;

    ll countA = n / a;
    ll countB = n / b;
    ll countAB = n / lcmll(a, b);

    ll pureA = countA - countAB;
    ll pureB = countB - countAB;

    ll ans = pureA * p + pureB * q;

    ans += countAB * max(p, q);

    cout << ans << "\n";

    return 0;

}
