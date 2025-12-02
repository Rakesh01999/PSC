
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;cin >> t;
    while (t--) {
        int n;cin >> n;

        ll x, all_and = -1;  
        
        for(int i = 0; i < n; i++) {
            cin >> x;
            all_and &= x;
        }

        cout << all_and << "\n";

    }


    return 0;
}
