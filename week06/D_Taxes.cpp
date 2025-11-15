
#include <bits/stdc++.h>
using namespace std;

long long smallest_prime_factor(long long n) {
    if (n % 2 == 0) 
        return 2;
    for (long long i = 3; i * i <= n; i += 2)
        if (n % i == 0)
            return i;
    return n; 
    
}

int main() {
    long long n;cin >> n;

    if (n % 2 == 0) {
        cout << 2 << "\n";
    } else {
        long long p = smallest_prime_factor(n);
        if (p == n) 
            cout << 1 << "\n"; 
        else 
            cout << p << "\n";
    }

    return 0;
}

