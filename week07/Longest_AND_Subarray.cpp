#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;cin >> t;

    while(t--) {

        ll n;cin >> n;

        // largest power of 2 <= n
        ll p = 1;
        while (p * 2 <= n) 
            p *= 2;

        ll ans = max(n - p + 1, p / 2);
        
        cout << ans << "\n";
    }

    
    return 0;
}
