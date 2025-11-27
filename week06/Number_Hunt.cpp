#include <bits/stdc++.h>
using namespace std;
#define ll long long

bool isPrime(ll n) {
    if (n < 2)
        return false;
    if(n % 2 ==0)
        return (n == 2);
    for (ll i = 3; i * i <= n; i += 2)
        if (n % i == 0)
            return false;
    return true;
}

ll nextPrime(ll x) {
    if(x <= 2)
        return 2;
    if(x% 2 == 0)
        x++;
    while(!isPrime(x))
        x += 2;
    return x;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;cin >> t;

    while (t--) {
        ll X;cin >> X;

        ll p1 = nextPrime(X);
    
        ll p2 = nextPrime(p1 + 1);

        unsigned long long Y = (unsigned long long)p1 * (unsigned long long)p2;

        cout << Y << "\n";
    }


    return 0;
}
