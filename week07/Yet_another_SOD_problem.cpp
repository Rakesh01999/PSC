#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll countDiv3(ll x) {
    return x / 3;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;cin >> t;

    while(t--){
        ll L, R;cin >> L >> R;

        ll ans = countDiv3(R) - countDiv3(L - 1);
        
        cout << ans << "\n";
    }


    return 0;
}
